#include <bits/stdc++.h>

#define MOD 1000000000

using namespace std;

int n;
int dp[105][15][1 << 10], ans = 0;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  int end_bit = (1 << 10) - 1;

  for (int i = 1; i <= 9; i++)
    dp[1][i][1 << i] = 1;

  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j <= 9; j++)
    {
      for (int k = 0; k <= end_bit; k++)
      {
        if (j == 0)
          dp[i][0][k | (1 << 0)] = (dp[i][0][k | (1 << 0)] + dp[i - 1][1][k]) % MOD;

        else if (j == 9)
          dp[i][9][k | (1 << 9)] = (dp[i][9][k | (1 << 9)] + dp[i - 1][8][k]) % MOD;  

        else
        {
          dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j - 1][k]) % MOD;
          dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j + 1][k]) % MOD;
        }
      }
    }
  }

  for (int i = 0; i <= 9; i++)
  {
    ans += dp[n][i][end_bit];
    ans %= MOD;
  }

  cout << ans;

  return 0;
}