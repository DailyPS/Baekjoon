#include <bits/stdc++.h>

using namespace std;

int n, ans;
int num[100005];
int dp[100005];

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    dp[0] = num[0];
    ans = dp[0];

    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + num[i], num[i]);
        ans = max(ans, dp[i]);
    }

    printf("%d", ans);

    return 0;
}