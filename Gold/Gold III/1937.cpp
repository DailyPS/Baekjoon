#include <bits/stdc++.h>

using namespace std;

int n;
int bamboo[505][505] = { 0 };
int max_route = 0;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dp[505][505] = { 0 };

int dfs (int x, int y)
{
  if (dp[y][x])
    return dp[y][x];

  dp[y][x] = 1;
  
  for (int i = 0; i < 4; i++)
  {
    int fx = x + dx[i];
    int fy = y + dy[i];

    if (fx < 0 || fx >= n || fy < 0 || fy >= n)
      continue;

    if (bamboo[fy][fx] <= bamboo[y][x])
      continue;

    dp[y][x] = max(dp[y][x], dfs(fx, fy) + 1);
  }

  return dp[y][x];
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        cin >> bamboo[i][j];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        max_route = max(max_route, dfs(j, i));
    }

    cout << max_route;

    return 0;
}