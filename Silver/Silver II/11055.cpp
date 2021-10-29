#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int number[1005];
int dp[1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> number[i];

  for (int i = 0; i < n; i++)
  {
    dp[i] = number[i];

    for (int j = 0; j < i; j++)
    {
      if (number[j] < number[i] && dp[i] < dp[j] + number[i])
        dp[i] = dp[j] + number[i];
    }
  }

  for (int i = 0; i < n; i++)
    ans = max(ans, dp[i]);

  cout << ans;

  return 0;
}