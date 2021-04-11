#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int s;

    scanf("%lld", &s);

    int ans = 0;
    int num = 1;

    while(s > 0)
    {
        if (s < num)
            break;

        s -= num;
        ans++;
        num++;
    }

    printf("%d", ans);

    return 0;
}