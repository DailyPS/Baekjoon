#include <bits/stdc++.h>

using namespace std;

int n;
int A[1005];
int dp[1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> A[i];
    dp[i] = 123456789;
  }

  dp[1] = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= min(n, i + A[i]); j++)
      dp[j] = min(dp[j], dp[i] + 1);
  }

  cout << (dp[n] == 123456789 ? -1 : dp[n]);

  return 0;
}