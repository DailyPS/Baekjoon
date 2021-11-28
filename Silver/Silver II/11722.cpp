#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int arr[1005], dp[1005];

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
      if (arr[i] < arr[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }

    ans = max(ans, dp[i]);
  }

  cout << ans;

  return 0;
}