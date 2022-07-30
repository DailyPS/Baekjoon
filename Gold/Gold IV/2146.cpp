#include <bits/stdc++.h>

using namespace std;

int n, ans = INT_MAX;
int island[105][105];
int districtd_island[105][105];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int dist[105][105];

void dfs(int x, int y, int num)
{
  districtd_island[y][x] = num;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || ny < 0 || nx >= n || ny >= n)
      continue;

    if (!districtd_island[ny][nx] && island[ny][nx])
      dfs(nx, ny, num);
  }
}


void bfs(int island_num)
{
  queue<pair<int, int>> q;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      dist[i][j] = -1;

      if (districtd_island[i][j] == island_num)
      {
        q.push(make_pair(j, i));
        dist[i][j] = 0;
      }
    }
  }

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || nx >= n || ny >= n)
        continue;

      if (dist[ny][nx] == -1)
      {
        dist[ny][nx] = dist[y][x] + 1;
        q.push(make_pair(nx, ny));
      }
    } 
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (districtd_island[i][j] != island_num && districtd_island[i][j] != 0)
        ans = min(ans, dist[i][j] - 1);
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
      cin >> island[i][j];
  }

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (island[i][j] && !districtd_island[i][j])
      {
        cnt++;
        dfs(j, i, cnt);
      }
    }
  }

  for (int i = 1; i <= cnt; i++)
    bfs(i);

  cout << ans;

  return 0;
}