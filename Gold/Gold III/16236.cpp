#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int sea[25][25];
int dist[25][25];

int sx, sy, s_sz = 2, cnt = 0;
int mx = INT_MAX, my = INT_MAX, min_dist = INT_MAX;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int x, int y)
{
  queue<pair<int, int>> q;
  dist[y][x] = 0;
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

      if (nx < 0 || nx >= n || ny < 0 || ny >= n || dist[ny][nx] != -1 || sea[ny][nx] > s_sz)
        continue;

      dist[ny][nx] = dist[cy][cx] + 1;
      q.push(make_pair(nx, ny));

      if (sea[ny][nx] && sea[ny][nx] < s_sz)
      {
        if (min_dist > dist[ny][nx])
        {
          mx = nx;
          my = ny;
          min_dist = dist[ny][nx];
        }

        else if (min_dist == dist[ny][nx])
        {
          if (my == ny)
          {
            if (mx > nx)
            {
              mx = nx;
              my = ny;
            }
          }

          else if (my > ny)
          {
            mx = nx;
            my = ny;
          }
        }
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> sea[i][j];

      if (sea[i][j] == 9)
      {
        sx = j;
        sy = i;
        sea[i][j] = 0;
      }
    }
  }

  while(true)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        dist[i][j] = -1;
    }

    mx = INT_MAX;
    my = INT_MAX;
    min_dist = INT_MAX;

    bfs(sx, sy);

    if (mx != INT_MAX && my != INT_MAX)
    {
      ans += min_dist;
      cnt++;

      if (cnt == s_sz)
      {
        s_sz++;
        cnt = 0;
      }

      sea[my][mx] = 0;

      sx = mx;
      sy = my;
    }

    else
      break;
  }

  cout << ans;

  return 0;
}