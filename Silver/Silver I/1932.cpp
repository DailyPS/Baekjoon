#include <bits/stdc++.h>

using namespace std;

int n, ans = -1;
int num[505][505];
int dp[505][505];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cin >> num[i][j];
  }

  dp[0][0] = num[0][0];
  dp[1][0] = dp[0][0] + num[1][0];
  dp[1][1] = dp[0][0] + num[1][1];

  for (int i = 2; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == 0)
        dp[i][j] = dp[i - 1][j] + num[i][j];

      else if (j == i)
        dp[i][j] = dp[i - 1][j - 1] + num[i][j];

      else
        dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + num[i][j];
    }
  }
  
  for (int i = 0; i < n; i++)
    ans = max(ans, dp[n - 1][i]);

  cout << ans;

  return 0;
}