#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int board[105][105];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void paste(int x, int y)
{
  for (int i = x; i < x + 10; i++)
  {
    for (int j = y; j < y + 10; j++)
      board[i][j] = 1;
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    paste(x, y);
  }

  for (int i = 1; i <= 100; i++)
  {
    for (int j = 1; j <= 100; j++)
    {
      if (board[i][j] == 1)
      {
        for (int k = 0; k < 4; k++)
        {
          int nx = i + dx[k];
          int ny = j + dy[k];

          if (!board[nx][ny])
            ans++;
        }
      }
    }
  }

  cout << ans;

  return 0;
}