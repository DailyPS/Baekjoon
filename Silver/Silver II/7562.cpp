#include <bits/stdc++.h>

using namespace std;

int t;
int l, sx, sy, ex, ey;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

int chess[305][305] = { 0 };
queue<pair<int, int>> q;

void bfs()
{
  while(!q.empty())
  {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    for (int i = 0; i < 8; i++)
    {
      int nx = cx + dx[i];
      int ny = cy + dy[i];

      if (nx < 0 || nx >= l || ny < 0 || ny >= l)
        continue;

      if (!chess[ny][nx] && (nx != sx || ny != sy))
      {
        chess[ny][nx] = chess[cy][cx] + 1;
        q.push(make_pair(nx, ny));
      }

      if (nx == ex && ny == ey)
        return;
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    cin >> l >> sx >> sy >> ex >> ey;

    if (sx == ex && sy == ey) 
      cout << "0\n";

    else
    {
      q.push(make_pair(sx, sy));
      bfs();

      cout << chess[ey][ex] << "\n";

      memset(chess, 0, sizeof(chess));

      while(!q.empty())
        q.pop();
    }
  }
  return 0;
}