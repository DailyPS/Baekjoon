#include <bits/stdc++.h>

using namespace std;

int n;
int buy_cost[20][20];
int dp[1 << 15][20][15];

int dfs(int bit, int artist, int cur_cost)
{
  if (dp[bit][artist][cur_cost] != -1)
    return dp[bit][artist][cur_cost];

  dp[bit][artist][cur_cost] = 0;

  for (int i = 0; i < n; i++)
  {
    if (bit & (1 << i))
      continue;

    if (buy_cost[artist][i] >= cur_cost)
    {
      int nxt_bit = (bit | (1 << i));
      dp[bit][artist][cur_cost] = max(dp[bit][artist][cur_cost], dfs(nxt_bit, i, buy_cost[artist][i]) + 1);
    }
  }

  return dp[bit][artist][cur_cost];
}

int main(void)
{
  //cin.tie(NULL);
  //ios::sync_with_stdio(false);

  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      scanf("%1d", &buy_cost[i][j]);
  }

  memset(dp, -1, sizeof(dp));

  printf("%d", dfs(1, 0, 0) + 1);

  return 0;
}