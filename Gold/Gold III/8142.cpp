#include <bits/stdc++.h>

using namespace std;

int n;
int cnt = 0;
int ridge = 0;
int valley = 0;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int trek_map[1005][1005] = { 0 };
bool visited[1005][1005] = { 0 };

vector<pair<int, int>> g[1000005];

void dfs(int x, int y)
{
  visited[y][x] = true;
  g[cnt].push_back(make_pair(x, y));

  for (int i = 0; i < 8; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
      continue;

    if (trek_map[ny][nx] == trek_map[y][x] && !visited[ny][nx])
      dfs(nx, ny);
  }
}

bool check_ridge(int i)
{
  for (auto& i : g[i])
  {
    int x = i.first;
    int y = i.second;

    for (int i = 0; i < 8; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= n)
        continue;

      if (trek_map[ny][nx] > trek_map[y][x])
        return false;
    }
  }

  return true;
}


bool check_valley(int i)
{
  for (auto& i : g[i])
  {
    int x = i.first;
    int y = i.second;

    for (int i = 0; i < 8; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= n)
        continue;

      if (trek_map[ny][nx] < trek_map[y][x])
        return false;
    }
  }

  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> trek_map[i][j];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (!visited[i][j])
      {
        dfs(j, i);
        cnt++;
      }
    }
  }

  for (int i = 0; i < cnt; i++)
  {
    if (check_ridge(i))
      ridge++;
    
    if (check_valley(i))
      valley++;
  }
  cout << ridge << " " << valley;

  return 0;
}