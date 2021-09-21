#include <bits/stdc++.h>

using namespace std;

int t, m, n, k;
int ans = 0;
int baechu[55][55] = { 0 };

bool visited[55][55] = { 0 };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y)
{
  visited[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= m || ny < 0 || ny >= n)
      continue;

    if (!visited[ny][nx] && baechu[ny][nx])
      dfs(nx, ny);
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    cin >> m >> n >> k;

    for (int i = 0; i < k; i++)
    {
      int x, y;

      cin >> x >> y;

      baechu[y][x] = 1;
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (!visited[i][j] && baechu[i][j])
        {
          dfs(j, i);
          ans++;
        }
      }
    }

    cout << ans << "\n";

    ans = 0;

    for (int i = 0; i < n; i++)
      fill_n(visited[i], sizeof(visited[i]), false);

    for (int i = 0; i < n; i++)
      fill_n(baechu[i], sizeof(baechu[i]), 0);
  }
  return 0;
}