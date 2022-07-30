#include <bits/stdc++.h>

using namespace std;

long long int dp[10005] = { 0 };

int main(void)
{
    dp[0] = 1;

    int v, n;

    scanf("%d %d", &v, &n);

    for (int i = 0; i < v; i++)
    {
        int coin;

        scanf("%d", &coin);

        for (int j = 0; j + coin <= n; j++)
            dp[j + coin] += dp[j];
    }

    printf("%lld", dp[n]);

    return 0;
}