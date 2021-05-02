#include <bits/stdc++.h>
#define MOD 1234567891
#define MUL 31

using namespace std;

int main(void)
{
    int l;
    long long int mul = 1;
    long long int ans = 0;

    scanf("%d", &l);
    getchar();

    for (int i = 0; i < l; i++)
    {
        char target;

        scanf("%1c", &target);
        
        ans += mul * (target - 'a' + 1);
        ans %= MOD;
        mul = (mul * MUL) % MOD;
    }

    printf("%lld", ans);

    return 0;
}