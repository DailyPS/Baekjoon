#include <bits/stdc++.h>

using namespace std;

int m, n, k;
int tile[105][105] = { 0 };

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

vector<int> area;
queue<pair<int, int>> q;

void draw_rectangle(int x1, int y1, int x2, int y2)
{
  for (int i = y1; i < y2; i++)
  {
    for (int j = x1; j < x2; j++)
      tile[i][j] = 1;
  }
}

int bfs(int x, int y)
{ 
  int ret = 1;
  tile[y][x] = 2;
  q.push(make_pair(x, y));

  while(!q.empty())
  {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        continue;

      if (!tile[ny][nx])
      {
        ret++;
        tile[ny][nx] = 2;
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

  cin >> m >> n >> k;

  for (int i = 0; i < k; i++)
  {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    draw_rectangle(x1, y1, x2, y2);
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (!tile[i][j])
        area.push_back(bfs(j, i));
    }
  }

  sort(area.begin(), area.end());

  cout << area.size() << "\n";

  for (int i = 0; i < area.size(); i++)
    cout << area[i] << " ";

  return 0;
}