#include <bits/stdc++.h>

using namespace std;

int n;
int color_cost[1005][3];
int dp[1005][3];

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

  dp[0][0] = color_cost[0][0];
  dp[0][1] = color_cost[0][1];
  dp[0][2] = color_cost[0][2];

  for (int i = 1; i < n; i++)
  {
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + color_cost[i][0];
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + color_cost[i][1];
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + color_cost[i][2];
  }

  cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));

  return 0;
}