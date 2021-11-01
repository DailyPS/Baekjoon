#include <bits/stdc++.h>

using namespace std;

int t;
int file_cost[505], sum[505];
int dp[505][505];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;
    int tmp = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> file_cost[i];
      tmp += file_cost[i];
      sum[i] = tmp;
    }

    for (int i = 1; i < n; i++)
    {
      for (int j = 0; j + i < n; j++)
      {
        dp[j][j + i] = INT_MAX;

        for (int k = j; k < j + i; k++)
          dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k + 1][j + i] + sum[j + i] - sum[j - 1]);
      }
    }

    cout << dp[0][n - 1] << "\n";
  }

  return 0;
}