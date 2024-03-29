#include <bits/stdc++.h>

using namespace std;

int t;
int dp[105][2];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  dp[0][0] = 1;
  dp[1][1] = 1;

  for (int i = 2; i <= 41; i++)
  {
    dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
    dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
  }

  while(t--)
  {
    int n;

    cin >> n;

    cout << dp[n][0] << " " << dp[n][1] << "\n";
  }
  return 0;
}