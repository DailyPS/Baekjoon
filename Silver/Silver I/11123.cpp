#include <bits/stdc++.h>

using namespace std;

int t, h, w;
vector<string> land;
bool visited[105][105];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int x, int y)
{
  queue<pair<int ,int>> q;
  q.push(make_pair(x, y));
  visited[y][x] = true;

  while (!q.empty())
  {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      if (nx < 0 || nx >= w || ny < 0 || ny >= h)
        continue;

      if (!visited[ny][nx] && land[ny][nx] == '#')
      {
        visited[ny][nx] = true;
        q.push(make_pair(nx, ny));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int ans = 0;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
      string s;
      cin >> s;
      land.push_back(s);
    }

    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        if (!visited[i][j] && land[i][j] == '#')
        {
          bfs(j, i);
          ans++;
        }
      }
    }

    cout << ans << "\n";

    memset(visited, 0, sizeof(visited));
    land.clear();
  }

  return 0;
}