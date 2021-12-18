#include <bits/stdc++.h>

using namespace std;

int t;
int dp[505][16];

int fill_tile(int n, int bit)
{
  if (n < 0)
    return 0;
  
  if (n < 1)
    return bit == 0;

  if (dp[n][bit])
    return dp[n][bit];

  int ret = 0;

  if (bit == 0)
  {
    ret += fill_tile(n - 1, 0);
    ret += fill_tile(n - 1, 3);
    ret += fill_tile(n - 1, 9);
    ret += fill_tile(n - 1, 12);
    ret += fill_tile(n - 2, 0);
  }

  else if (bit == 3)
  {
    ret += fill_tile(n - 1, 0);
    ret += fill_tile(n - 1, 12);
  }

  else if (bit == 6)
  {
    ret += fill_tile(n - 1, 9);
  }

  else if (bit == 9)
  {
    ret += fill_tile(n - 1, 0);
    ret += fill_tile(n - 1, 6);
  }

  else if (bit == 12)
  {
    ret += fill_tile(n - 1, 0);
    ret += fill_tile(n - 1, 3);
  }

  return dp[n][bit] = ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    cout << fill_tile(n, 0) << "\n";
  }

  return 0;
}