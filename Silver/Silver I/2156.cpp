#include <bits/stdc++.h>

using namespace std;

int n;
int wine[10005];
int dp[10005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> wine[i];

  dp[1] = wine[1];
  dp[2] = dp[1] + wine[2];

  for (int i = 3; i <= n; i++)
  {
    dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]);
    dp[i] = max(dp[i], dp[i - 1]);
  }

  cout << dp[n];

  return 0;
}