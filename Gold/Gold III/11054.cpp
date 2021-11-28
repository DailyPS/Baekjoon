#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int arr[1005], dp[1005], r_dp[1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
  {
    dp[i] = 1;

    for (int j = 0; j < i; j++)
    {
      if (arr[i] > arr[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }

  for (int i = n - 1; i >= 0; i--)
  {
    r_dp[i] = 1;

    for (int j = n - 1; j > i; j--)
    {
      if (arr[i] > arr[j])
        r_dp[i] = max(r_dp[i], r_dp[j] + 1);
    }
  }

  for (int i = 0; i < n; i++)
    ans = max(ans, dp[i] + r_dp[i] - 1);

  cout << ans;

  return 0;
}