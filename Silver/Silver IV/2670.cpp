#include <bits/stdc++.h>

using namespace std;

int n;
double dp[10005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> dp[i];

  double ans = dp[0];

  for (int i = 1; i < n; i++)
  {
    dp[i] = max(dp[i], dp[i] * dp[i - 1]);
    ans = max(ans, dp[i]);
  }

  cout << fixed;
  cout.precision(3);
  cout << ans;

  return 0;
}