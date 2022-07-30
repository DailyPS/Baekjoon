#include <bits/stdc++.h>

using namespace std;

int m, n;
int mountain_map[505][505];

int dp[505][505];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int dfs(int x, int y)
{
  if (x == n - 1 && y == m - 1)
    return 1;

  if (dp[y][x] != -1)
    return dp[y][x];

  dp[y][x] = 0;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
      continue;

    if (mountain_map[y][x] > mountain_map[ny][nx])
      dp[y][x] += dfs(nx, ny);
  }

  return dp[y][x];
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n;

  memset(dp, -1, sizeof(dp));

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> mountain_map[i][j];
  }

  cout << dfs(0, 0);

  return 0;
}