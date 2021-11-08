#include <bits/stdc++.h>

using namespace std;

int t;
long long int dp[85][15];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 10; i++)
    dp[1][i] = 1;

  for (int i = 1; i <= 80; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      for (int k = j; k >= 0; k--)
        dp[i + 1][k] += dp[i][j];
    }
  }

  cin >> t;

  while(t--)
  {
    string s;
    bool flag = true;

    cin >> s;
    int len = s.length();

    for (int i = 0; i < len - 1; i++)
    {
      if (s[i] > s[i + 1])
      {
        flag = false;
        break;
      }
    }

    if (!flag)
      cout << "-1\n";

    else
    {
      long long int ans = dp[len + 1][0];

      for (int i = 0; i < len; i++)
      {
        int num = s[i] - '0';

        for (int j = num + 1; j < 10; j++)
          ans -= dp[len - i][j];
      }

      cout << ans - 1 << "\n";
    }
  }

  return 0;
}