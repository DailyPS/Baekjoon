#include <bits/stdc++.h>

using namespace std;

long long int dp[100] = {0};

int main(void)
{
    int n;

    scanf("%d", &n);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    printf("%lld", dp[n]);

    return 0;
}