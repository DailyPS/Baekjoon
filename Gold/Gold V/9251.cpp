#include <bits/stdc++.h>

using namespace std;

string a, b;

int dp[1005][1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  int len_a = a.length();
  int len_b = b.length();

  for (int i = 1; i <= len_a; i++)
  {
    for (int j = 1; j <= len_b; j++)
    {
      if (a[i - 1] == b[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;

      else
        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
    }
  }

  cout << dp[len_a][len_b];

  return 0;
}