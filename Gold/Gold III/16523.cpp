#include <bits/stdc++.h>

using namespace std;

int n, dp[10005], d[10005], c[10005];

int make_cost_low(int i)
{
    if (i >= n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    int cost = 4 * c[i], time = d[i];
    dp[i] = cost + make_cost_low(i + 1);

    for (int j = 1; j < 6; j++)
    {
        if (time >= 120)
            break;

        cost += c[i + j];

        if (j == 1)
            cost += c[i + j];

        time += d[i + j];

        dp[i] = min(dp[i], cost + make_cost_low(i + j + 1));
    }

    return dp[i];
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> d[i] >> c[i];

    memset(dp, -1, sizeof(dp));

    cout << fixed;
    cout.precision(2);
    cout << make_cost_low(0) * 0.25;

    return 0;
}