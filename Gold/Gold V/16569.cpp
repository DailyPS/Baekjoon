#include <bits/stdc++.h>

using namespace std;

int m, n, v;
int j_x, j_y;
int min_time = 0, max_height = 0;

int island[105][105] = { 0 };
int volcano[105][105] = { 0 };
bool j_visited[105][105] = { 0 };

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

queue<pair<int, int>> q;
vector<tuple<int, int, int>> vec;

void volcano_bfs(int i)
{
  bool visited[105][105] = { 0 };
  int x = get<0>(vec[i]);
  int y = get<1>(vec[i]);
  int time = get<2>(vec[i]);

  q.push(make_pair(x, y));
  visited[y][x] = true;
  volcano[y][x] = min(volcano[y][x], time);

  while(!q.empty())
  {
    int sz = q.size();
    time++;

    for (int i = 0; i < sz; i++)
    {
      int cx = q.front().first;
      int cy = q.front().second;
      q.pop();

      for (int j = 0; j < 4; j++)
      {
        int nx = cx + dx[j];
        int ny = cy + dy[j];

        if (nx <= 0 || nx > n || ny <= 0 || ny > m)
          continue;

        if (!visited[ny][nx])
        {
          volcano[ny][nx] = min(volcano[ny][nx], time);
          visited[ny][nx] = true;
          q.push(make_pair(nx, ny));
        }
      }
    }
  }
}

void bfs()
{
  int nx_time = 1;
  q.push(make_pair(j_y, j_x));
  max_height = island[j_x][j_y];
  j_visited[j_x][j_y] = true;
  
  while(!q.empty())
  {
    int sz = q.size();

    for (int i = 0; i < sz; i++)
    {
      int cx = q.front().first;
      int cy = q.front().second;
      q.pop();

      for (int j = 0; j < 4; j++)
      {
        int nx = cx + dx[j];
        int ny = cy + dy[j];

        //cout << "Now : (" << cx << ", " << cy << "), ";
        //cout << "Next : (" << nx << ", " << ny << ")\n";

        if (nx <= 0 || nx > n || ny <= 0 || ny > m)
          continue;

        if (!j_visited[ny][nx])
        {
          if (volcano[ny][nx] <= nx_time)
          {
            j_visited[ny][nx] = true;
            continue;
          }

          if (max_height == island[ny][nx])
            min_time = min(min_time, nx_time);

          if (max_height < island[ny][nx])
          {
            min_time = nx_time;
            max_height = island[ny][nx];
          }

          j_visited[ny][nx] = true;
          q.push(make_pair(nx, ny));
        }
      }
    }

    nx_time++;
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 105; i++)
  {
    for (int j = 0; j < 105; j++)
      volcano[i][j] = INT_MAX;
  }

  cin >> m >> n >> v;
  cin >> j_x >> j_y;

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
      cin >> island[i][j];
  }

  for (int i = 0; i < v; i++)
  {
    int xi, yi, ti;

    cin >> yi >> xi >> ti;

    vec.push_back(make_tuple(xi, yi, ti));
    j_visited[yi][xi] = true;
  }

  for (int i = 0; i < v; i++)
    volcano_bfs(i);

  /*cout << "Volcano\n";

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
      cout << volcano[i][j] << " ";

    cout << "\n";
  }*/

  bfs();

  cout << max_height << " " << min_time;

  return 0;
}