#include <bits/stdc++.h>

using namespace std;

int n, m;
int board[1002][1002];
int ans[1002][1002];
queue<pair<int, int>> q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  int s_x, s_y;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
      
      if (board[i][j] == 2) {
        s_y = i, s_x = j;
      }
    }
  }

  q.push(make_pair(s_x, s_y));
  ans[s_y][s_x] = 1;

  while(!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;

    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || ny < 0 || nx >= m || ny >= n || board[ny][nx] == 0 || ans[ny][nx] != 0)
        continue;

      ans[ny][nx] = ans[y][x] + 1;
      q.push(make_pair(nx, ny));
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) {
        cout << ans[i][j]<< " ";
      }
      
      else {
        cout << ans[i][j] - 1 << " ";
      }
    }

    cout << "\n";
  }

  return 0;
}