#include <bits/stdc++.h>

#define MOD 10007

using namespace std;

int n;
int dp[1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= n; i++)
    dp[i] = (dp[i - 1] + (2 * dp[i - 2]) % MOD) % MOD;

  cout << dp[n];

  return 0;
}