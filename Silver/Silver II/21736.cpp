#include <bits/stdc++.h>

using namespace std;

int n, m;
int ans = 0;
char campus[605][605];
int visited[605][605] = { 0 };
queue<pair<int, int>> pos;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int s_x , s_y;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j ++) {
      cin >> campus[i][j];

      if (campus[i][j] == 'I') {
        s_x = j, s_y = i;
      }
    }
  }

  pos.push(make_pair(s_x, s_y));
  visited[s_y][s_x] = 1;

  while(!pos.empty()) {
    int x = pos.front().first;
    int y = pos.front().second;

    //cout << "Now x : " << x << "\tNow y : " << y << "\n";

    if (campus[y][x] == 'P')
      ans++;

    pos.pop();

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || nx >= m || ny >= n || visited[ny][nx] == 1 || campus[ny][nx] == 'X') 
        continue;

      pos.push(make_pair(nx, ny));
      visited[ny][nx] = 1;
    }
  }

  if (ans)
    cout << ans;

  else
    cout << "TT";

  return 0;
}