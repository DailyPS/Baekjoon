#include <bits/stdc++.h>

using namespace std;

int n, m, ans = -1;
int board[505][505];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  int calc;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cin >> board[i][j];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m - 3; j++)
    {
      calc = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i][j + 3];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 3; i++)
  {
    for (int j = 0; j < m; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 3][j];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i + 1][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 2][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j + 1] + board[i][j + 1] + board[i + 2][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j + 2] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 1][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j + 1] + board[i + 1][j + 1] + board[i + 2][j + 1] + board[i + 2][j];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 1][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j + 1] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i + 1][j] + board[i + 1][j + 1] + board[i][j + 1] + board[i][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 1][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i][j + 2];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      calc = board[i + 1][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 2][j + 1];
      ans = max(ans, calc);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 2; j++)
    {
      calc = board[i][j + 1] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 1][j + 2];
      ans = max(ans, calc);
    }
  }

  cout << ans;

  return 0;
}