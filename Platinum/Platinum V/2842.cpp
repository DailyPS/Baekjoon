#include <bits/stdc++.h>

using namespace std;

int n;
string village[55];
int height[55][55];

int sx, sy, house = 0;
vector<int> v;

int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
bool visited[55][55];

bool bfs(int l, int r)
{
  queue<pair<int, int>> q;
  q.push(make_pair(sx, sy));
  visited[sy][sx] = true;

  int v_house = 0;

  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (village[y][x] == 'K')
      v_house++;

    if (v_house == house)
      return true;

    for (int i = 0; i < 8; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= n)
        continue;

      if (l > height[ny][nx] || height[ny][nx] > r)
        continue;

      if (!visited[ny][nx])
      {
        visited[ny][nx] = true;
        q.push(make_pair(nx, ny));
      } 
    }
  }

  return false;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> village[i];

    for (int j = 0; j < n; j++)
    {
      if (village[i][j] == 'P')
      {
        sx = j;
        sy = i;
      }

      else if (village[i][j] == 'K')
        house++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> height[i][j];
      v.push_back(height[i][j]);
    }
  }

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  int ans = 1e9, sz = v.size();
  int l = 0, r = 0;

  while(r < sz)
  {
    while(true)
    {
      bool flag = false;

      if (v[l] <= height[sy][sx] && height[sy][sx] <= v[r])
      {
        flag = bfs(v[l], v[r]);
        memset(visited, 0, sizeof(visited));
      }

      if (!flag)
        break;

      ans = min(ans, v[r] - v[l]);
      l++;
    }

    r++;
  }

  cout << ans;

  return 0;
}