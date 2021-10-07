#include <bits/stdc++.h>

using namespace std;

int n, cnt = 1;
string s[30];
bool visited[30][30];
vector<int> house_cnt;

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

void dfs(int x, int y)
{
  visited[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
      continue;

    if (!visited[ny][nx] && s[ny][nx] == '1')
    {
      cnt++;
      dfs(nx, ny);
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> s[i];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (s[i][j] == '1' && !visited[i][j])
      {
        dfs(j, i);
        house_cnt.push_back(cnt);
        cnt = 1;
      }
    }
  }

  sort(house_cnt.begin(), house_cnt.end());

  int sz = house_cnt.size();

  cout << sz << "\n";

  for (int i = 0; i < sz; i++)
    cout << house_cnt[i] << "\n";

  return 0;
}