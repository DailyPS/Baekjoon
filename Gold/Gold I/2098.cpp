#include <bits/stdc++.h>

#define INF 1e9

using namespace std;

int n, end_bit;
int city_dist[21][21];
int dp[20][1 << 20];

int dfs(int city, int bit)
{
  if (bit == end_bit)
  {
    if (city_dist[city][0] == 0)
      return INF;

    else
      return city_dist[city][0];
  }

  if (dp[city][bit] != -1)
    return dp[city][bit];

  dp[city][bit] = INF;

  for (int i = 0; i < n; i++)
  {
    if (city_dist[city][i] == 0)
      continue;

    if ((bit & (1 << i)) == (1 << i))
      continue;

    dp[city][bit] = min(dp[city][bit], city_dist[city][i] + dfs(i, bit | (1 << i)));
  }

  return dp[city][bit];
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> city_dist[i][j];
  }

  end_bit = (1 << n) - 1;

  memset(dp, -1, sizeof(dp));

  cout << dfs(0, 1);

  return 0;
}