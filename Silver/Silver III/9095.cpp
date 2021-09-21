#include <bits/stdc++.h>

using namespace std;

int n;
int dp[15] = { 0 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  dp[1] = 1;
  dp[2] = dp[1] + 1;
  dp[3] = dp[2] + dp[1] + 1;

  for (int i = 4; i <= 11; i++)
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

  for (int i = 0; i < n; i++)
  {
    int t;
    
    cin >> t;

    cout << dp[t] << "\n";
  }  

  return 0;
}