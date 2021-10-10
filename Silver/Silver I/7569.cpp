#include <bits/stdc++.h>

using namespace std;

int m, n, h;
int day = 0;

int tomato[105][105][105];

int dx[6] = { 0, 0, -1, 1, 0, 0};
int dy[6] = { 0, 0, 0, 0, -1, 1};
int dz[6] = { 1, -1, 0, 0, 0, 0};

queue<tuple<int, int, int>> q;

void bfs()
{
  while(!q.empty())
  {
    int x = get<0>(q.front());
    int y = get<1>(q.front());
    int z = get<2>(q.front());
    q.pop();

    for (int i = 0; i < 6; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      int nz = z + dz[i];

      if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h)
        continue;

      if (tomato[nz][ny][nx] == 0)
      {
        tomato[nz][ny][nx] = tomato[z][y][x] + 1;
        q.push(make_tuple(nx, ny, nz));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n >> h;

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++)
      {
        cin >> tomato[i][j][k];

        if (tomato[i][j][k] == 1)
          q.push(make_tuple(k, j, i));
      }
    }
  }

  bfs();

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++)
      {
        if (tomato[i][j][k] == 0)
        {
          cout << "-1";
          return 0;
        }

        day = max(day, tomato[i][j][k]);
      }
    }
  }

  cout << day - 1;

  return 0;
}