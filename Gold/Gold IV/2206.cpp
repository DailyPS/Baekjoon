#include <bits/stdc++.h>

using namespace std;

int n, m;
bool flag = false;
string maze[1005];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int visited[1005][1005][2];

int bfs()
{
  queue<pair<pair<int, int>, int>> q;
  q.push(make_pair(make_pair(0, 0), 1));
  visited[0][0][1] = true;

  while(!q.empty())
  {
    int x = q.front().first.first;
    int y = q.front().first.second;
    int break_cnt = q.front().second;
    q.pop();

    if (x == m - 1 && y == n - 1)
      return visited[y][x][break_cnt];

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= m || ny < 0 || ny >= n)
        continue;

      if (!visited[ny][nx][break_cnt])
      {
        if (maze[ny][nx] == '0')
        {
          visited[ny][nx][break_cnt] = visited[y][x][break_cnt] + 1;
          q.push(make_pair(make_pair(nx, ny), break_cnt));
        }

        else if (maze[ny][nx] == '1' && break_cnt)
        {
          visited[ny][nx][break_cnt - 1] = visited[y][x][break_cnt] + 1;
          q.push(make_pair(make_pair(nx, ny), break_cnt - 1));
        }
      }
    }
  }

  return -1;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0 ; i < n; i++)
    cin >> maze[i];

  cout << bfs();

  return 0;
}