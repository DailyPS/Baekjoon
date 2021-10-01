#include <bits/stdc++.h>

using namespace std;

int n;
int maze[2225][2225];
int dp[2225][2225];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> maze[i][j];
      dp[i][j] = INT_MAX;
    }  
  }

  dp[1][1] = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == n && j == n)
        break;

      if (i != n)
      {
        if (maze[i + 1][j] >= maze[i][j])
        {
          int tmp = maze[i + 1][j] - maze[i][j] + 1;
          dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + tmp);
        }

        else
          dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      }

      if (j != n)
      {
        if (maze[i][j + 1] >= maze[i][j])
        {
          int tmp = maze[i][j + 1] - maze[i][j] + 1;
          dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + tmp);
        }

        else
          dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
      }
    }
  }

  cout << dp[n][n];

  return 0;
}