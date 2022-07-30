#include <bits/stdc++.h>

using namespace std;

int n;
int dp[50005] = { 0 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = dp[i - 1] + dp[1];

    for (int j = 2; j * j <= i; j++)
      dp[i] = min(dp[i], dp[i - j * j] + 1);
  }

  cout << dp[n];

  return 0;
}