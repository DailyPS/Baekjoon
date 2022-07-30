#include <bits/stdc++.h>

using namespace std;

int n;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int grass[2005][2005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  int d = 0, ans = INT_MAX;
  int x = 1000, y = 1000;
  int nxt = 2;

  grass[y][x] = 1;

  for (int i = 0; i < n; i++)
  {
    char dir;
    int mov;

    cin >> dir >> mov;

    if (dir == 'E')
      d = 0;

    else if (dir == 'S')
      d = 1;

    else if (dir == 'W')
      d = 2;

    else
      d = 3;

    for (int j = 0; j < mov; j++)
    {
      int nx = x + dx[d];
      int ny = y + dy[d];

      if (grass[ny][nx])
        ans = min(ans, nxt - grass[ny][nx]);

      grass[ny][nx] = nxt;
      x = nx; y = ny;
      nxt++;
    }
  }

  if (ans == INT_MAX)
    cout << "-1";

  else
    cout << ans;

  return 0;
}