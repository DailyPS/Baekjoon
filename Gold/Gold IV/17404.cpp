#include <bits/stdc++.h>

using namespace std;

int n;
int color_cost[1005][3];
int dp[1005][3];
int ans = INT_MAX;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
      cin >> color_cost[i][j];
  }

  for (int color = 0; color < 3; color++)
  {
    for (int i = 0; i < 3; i++)
    {
      if (color == i)
        dp[0][i] = color_cost[0][i];

      else
        dp[0][i] = 1e7;
    }

    for (int i = 1; i < n; i++)
    {
      dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + color_cost[i][0];
      dp[i][1] = min(dp[i - 1][0], dp[i  - 1][2]) + color_cost[i][1];
      dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + color_cost[i][2];
    }

    for (int i = 0; i < 3; i++)
    {
      if (color == i)
        continue;

      else
        ans = min(ans, dp[n - 1][i]);
    }
  }

  cout << ans;

  return 0;
}