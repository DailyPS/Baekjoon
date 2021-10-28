#include <bits/stdc++.h>

using namespace std;

int n, k, ans = 0;
int dp[105][100005];

vector<pair<int, int>> merchandise;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    int w, v;

    cin >> w >> v;

    merchandise.push_back(make_pair(w, v));
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= k; j++)
    {
      if (merchandise[i - 1].first > j)
        dp[i][j] = dp[i - 1][j];

      else
        dp[i][j] = max(dp[i - 1][j], merchandise[i - 1].second + dp[i - 1][j - merchandise[i - 1].first]);

      ans = max(dp[i][j], ans);
    }
  }

  cout << ans;

  return 0;
}