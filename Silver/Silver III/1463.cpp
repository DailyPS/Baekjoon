#include <bits/stdc++.h>

using namespace std;

int n;
int dp[1000005] = { 0 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = dp[i - 1] + 1;

    if (i % 2 == 0)
      dp[i] = min(dp[i], dp[i / 2] + 1);

    if (i % 3 == 0)
      dp[i] = min(dp[i], dp[i / 3] + 1);
  }

  cout << dp[n];

  return 0;
}