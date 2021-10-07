#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
string maze[105];

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};
int dist[105][105];
queue<pair<int, int>> q;

void bfs()
{
  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (x == m - 1 && y == n - 1)
      return;

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
  
      if (nx < 0 || nx >= m || ny < 0 || ny >= n)
        continue;
      
      if (!dist[ny][nx] && maze[ny][nx] == '1')
      {
        dist[ny][nx] = dist[y][x] + 1;
        q.push(make_pair(nx, ny));
      }
    }
  }    
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
    cin >> maze[i];

  q.push(make_pair(0, 0));

  bfs();

  cout << dist[n - 1][m - 1] + 1;

  return 0;
}