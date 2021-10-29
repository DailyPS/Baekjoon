#include <bits/stdc++.h>

using namespace std;

int n, m;
int board[1005][1005] = { 0 };
int dp[1005][1005] = { 0 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while (true)
  {
    memset(board, 0, sizeof(board));
    memset(dp, 0, sizeof(dp));

    cin >> n >> m;

    if (n == 0 && m == 0)
      break;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
        cin >> board[i][j];
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        if (!board[i][j])
          continue;

        dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
        ans = max(dp[i][j], ans);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}