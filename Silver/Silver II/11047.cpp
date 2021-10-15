#include <bits/stdc++.h>

using namespace std;

int n, k;
int ans = 0;
int coin_list[10];

int main(void)
{
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &coin_list[i]);

    int idx = n - 1;

    while(k > 0)
    {
        ans += k / coin_list[idx];
        k %= coin_list[idx--];
    }

    printf("%d", ans);

    return 0;
}
