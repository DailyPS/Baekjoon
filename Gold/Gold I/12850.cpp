#include <bits/stdc++.h>

#define MOD 1000000007LL

using namespace std;

typedef vector<vector<long long int>> m;

long long int d;

m campus = {
  { 0, 1, 1, 0, 0, 0, 0, 0 },
  { 1, 0, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1, 0, 0, 0 },
  { 0, 1, 1, 0, 1, 1, 0, 0 },
  { 0, 0, 1, 1, 0, 1, 1, 0 },
  { 0, 0, 0, 1, 1, 0, 0, 1 },
  { 0, 0, 0, 0, 1, 0, 0, 1 },
  { 0, 0, 0, 0, 0, 1, 1, 0 }
};

m operator * (const m &a, const m &b)
{
  m c(8, vector<long long int>(8));

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      for (int k = 0; k < 8; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
        c[i][j] %= MOD;
      }

      c[i][j] %= MOD;
    }
  }

  return c;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> d;

  m ans(8, vector<long long int>(8));

  for (int i = 0; i < 8; i++)
    ans[i][i] = 1;

  m factor = campus;

  while (d > 0LL)
  {
    if (d % 2LL)
      ans = ans * factor;

    factor = factor * factor;
    d /= 2LL;
  }

  cout << ans[0][0];

  return 0;
}