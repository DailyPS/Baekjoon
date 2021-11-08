#include <bits/stdc++.h>

using namespace std;

int n, a, b;
int dp[1000005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> a >> b;

  memset(dp, 1e8, sizeof(dp));
  dp[0] = 0;

  for (int i = 1; i <= n; i++)
  {
    dp[i] = dp[i - 1] + 1;
    

    if (i - a - 1 >= 0)
      dp[i] = min(dp[i], dp[i - a - 1] + 1);

    if (i - b - 1 >= 0)
      dp[i] = min(dp[i], dp[i - b - 1] + 1);
  }

  cout << dp[n];

  return 0;
}