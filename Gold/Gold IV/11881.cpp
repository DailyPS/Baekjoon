#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int n, max_num = -1;
long long int cnt[100005];
long long int dp[100005][4];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int num;

    cin >> num;

    cnt[num]++;
    max_num = max(num, max_num);
  }

  for (int i = 1; i <= max_num; i++)
  {
    cnt[i] *= i;
    cnt[i] %= MOD;
  }

  for (int i = 0; i <= max_num; i++)
    dp[i][0] = 1;

  for (int j = 1; j <= 3; j++)
  {
    for (int i = 1; i <= max_num; i++)
    {
      dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] * cnt[i];
      dp[i][j] %= MOD;
    }
  }

  cout << dp[max_num][3];

  return 0;
}