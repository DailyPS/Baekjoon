#include <bits/stdc++.h>

using namespace std;

int n, ans = 0, ans_s = 0;
string color[105];
bool visited[105][105];
bool visited_s[105][105];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void dfs(int x, int y, char base_color)
{
  visited[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
      continue;

    if (!visited[ny][nx] && color[ny][nx] == base_color)
      dfs(nx, ny, base_color);
  }
}

void dfs_s(int x, int y, char base_color)
{
  visited_s[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
      continue;

    if (!visited_s[ny][nx])
    {
      if (color[ny][nx] == base_color)
        dfs_s(nx, ny, base_color);

      else if (base_color == 'R' && color[ny][nx] == 'G')
        dfs_s(nx, ny, base_color);

      else if (base_color == 'G' && color[ny][nx] == 'R')
        dfs_s(nx, ny, base_color);
    } 
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> color[i];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (!visited[i][j])
      {
        dfs(j, i, color[i][j]);
        ans++;
      }

      if (!visited_s[i][j])
      {
        dfs_s(j, i, color[i][j]);
        ans_s++;
      }
    }
  }

  cout << ans << " " << ans_s;

  return 0;
}