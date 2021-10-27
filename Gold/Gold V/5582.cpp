#include <bits/stdc++.h>

using namespace std;

string a, b;

int dp[4005][4005];
int max_lcs = 0;

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
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        max_lcs = max(max_lcs, dp[i][j]);
      }
    }
  }

  cout << max_lcs;

  return 0;
}