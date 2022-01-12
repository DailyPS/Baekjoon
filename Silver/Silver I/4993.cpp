#include <bits/stdc++.h>

using namespace std;

int w, h;
int start_x, start_y;
vector<string> tile;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool visited[25][25];

int bfs()
{
  int ret = 0;
  queue<pair<int, int>> q;
  q.push(make_pair(start_x, start_y));
  visited[start_y][start_x] = true;

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    ret++;

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= w || ny < 0 || ny >= h)
        continue;

      if (!visited[ny][nx] && tile[ny][nx] == '.')
      {
        visited[ny][nx] = true;
        q.push(make_pair(nx, ny));
      }
    }
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while(true)
  {
    cin >> w >> h;

    if (w == 0 && h == 0)
      break;

    for (int i = 0; i < h; i++)
    {
      string s;
      cin >> s;
      tile.push_back(s);

      for (int j = 0; j < w; j++)
      {
        if (s[j] == '@')
        {
          start_x = j;
          start_y = i;
        }
      }
    }

    cout << bfs() << "\n";

    memset(visited, 0, sizeof(visited));
    tile.clear();
  }

  return 0;
}