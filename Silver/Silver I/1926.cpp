#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0, cnt = 0;
int board[505][505];
bool visited[505][505];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs(int sx, int sy)
{
  int sz = 0;
  queue<pair<int, int>> q;
  q.push(make_pair(sx, sy));
  visited[sy][sx] = true;

  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    sz++;

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || nx >= m || ny >= n)
        continue;

      if (!visited[ny][nx] && board[ny][nx])
      {
        q.push(make_pair(nx, ny));
        visited[ny][nx] = true;
      }
    }
  }

  return sz;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cin >> board[i][j];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!visited[i][j] && board[i][j])
      {
        ans = max(ans, bfs(j, i));
        cnt++;
      }
    }
  }

  cout << cnt << "\n" << ans;

  return 0;
}