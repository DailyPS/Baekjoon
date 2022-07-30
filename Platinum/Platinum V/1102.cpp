#include <bits/stdc++.h>

using namespace std;

int n, p;
int cost[21][21];
int power_plant = 0;
int dp[1 << 16];
int ans = INT_MAX;

int count_bit(int bit)
{
  int cnt = 0;

  while(bit)
  {
    cnt += (bit & 1 ? 1 : 0);
    bit = bit >> 1;
  }

  return cnt;
}

int get_min_cost(int bit)
{
  if (count_bit(bit) >= p)
    return 0;

  if (dp[bit] != -1)
    return dp[bit];

  dp[bit] = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if ((bit & (1 << i)) == 0)
      continue;

    for (int j = 0; j < n; j++)
    {
      if ((bit & (1 << j)) == 0)
      {
        int nxt_bit = bit | (1 << j);
        dp[bit] = min(dp[bit], cost[i][j] + get_min_cost(nxt_bit));
      }
    }
  }

  return (dp[bit] == INT_MAX ? -1 : dp[bit]);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> cost[i][j];
  }

  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;

    if (c == 'Y')
      power_plant |= (1 << i);
  }

  cin >> p;

  memset(dp, -1, sizeof(dp));
  cout << get_min_cost(power_plant);

  return 0;
}