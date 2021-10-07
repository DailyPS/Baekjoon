#include <bits/stdc++.h>

using namespace std;

int t;

int sticker[2][100005];
int dp[2][100005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;

    cin >> n;

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < n; j++)
        cin >> sticker[i][j];
    }

    dp[0][0] = sticker[0][0];
    dp[1][0] = sticker[1][0];

    dp[0][1] = dp[1][0] + sticker[0][1];
    dp[1][1] = dp[0][0] + sticker[1][1];

    for (int i = 2; i < n; i++)
    {
      dp[0][i] = max(dp[1][i - 2], dp[1][i - 1]) + sticker[0][i];
      dp[1][i] = max(dp[0][i - 2], dp[0][i - 1]) + sticker[1][i];
    }

    cout << max(dp[0][n - 1], dp[1][n - 1]) << "\n";
  }
  return 0;
}