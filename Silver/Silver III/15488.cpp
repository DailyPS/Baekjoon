#include <bits/stdc++.h>

using namespace std;

int n, sx, sy, k;
double dp[55][55][55];

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> sx >> sy >> k;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
      dp[i][j][0] = 1;
  }

  for (int l = 1; l <= k; l++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        double ret = 0;

        for (int d = 0; d < 8; d++)
        {
          int nx = i + dx[d];
          int ny = j + dy[d];

          if (nx <= 0 || nx > n || ny <= 0 || ny > n)
            continue;

          ret += dp[nx][ny][l - 1];
        }

        dp[i][j][l] = ret / 8;
      }
    }
  }

  cout << fixed;
  cout.precision(20);
  cout << dp[sx][sy][k];

  return 0;
}