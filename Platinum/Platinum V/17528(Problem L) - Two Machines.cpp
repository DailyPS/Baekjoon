#include <bits/stdc++.h>

using namespace std;

int n;
int dp[260][63000]; // DP array for doing xth task with machine A spends y hours, machine B's minimum work time.
vector<pair<int, int>> v;

const int INF = 2147483647;

int main(void)
{
    scanf("%d", &n);

    v.resize(n);

    int sum = 0; // Sum of hours when A does all tasks.

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v[i].first, &v[i].second);
        sum += v[i].first;
    }

    fill(&dp[0][0], &dp[0][0] + 260 * 63000, INF);

    dp[0][sum] = 0; //when B does not do first work.
    dp[0][sum - v[0].first] = v[0].second; // when B does first work.


    for (int x = 0; x < n - 1; x++)
    {
        for (int y = 0; y < 63000; y++)
        {
            if (dp[x][y] != INF)
            {
                dp[x + 1][y] = dp [x][y]; // when B does not do x + 1th work.
                dp[x + 1][y - v[x + 1].first] = min(dp[x + 1][y - v[x + 1].first], dp[x][y] + v[x + 1].second);// B's minimum time when B does x + 1th work.
            }
        }
    }

    int ans = INF;

    for (int time = 0; time < 63000; time++)
        ans = min(ans, max(time, dp[n - 1][time]));

    printf("%d\n", ans);

    return 0;
}
