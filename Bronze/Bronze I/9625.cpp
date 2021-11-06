#include <bits/stdc++.h>

using namespace std;

int n;
int dp[50];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++)
    dp[i] = dp[i - 1] + dp[i - 2];

  cout << dp[n - 1] << " " << dp[n];

  return 0;
}