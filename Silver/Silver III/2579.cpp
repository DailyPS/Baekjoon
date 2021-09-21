#include <bits/stdc++.h>

using namespace std;

int n;
int stair[305] = { 0 };
int dp[305] = { 0 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> stair[i];

  dp[1] = stair[1];
  dp[2] = max(stair[2], stair[1] + stair[2]);

  for (int i = 3; i <= n; i++)
    dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1] + dp[i - 3]);

  cout << dp[n];

  return 0;
}