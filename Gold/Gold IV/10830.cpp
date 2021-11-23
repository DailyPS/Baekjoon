#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> m;

int n;
long long int b;

m operator * (const m &a, const m &b)
{
  int sz = a.size();
  m c(sz, vector<int>(sz));

  for (int i = 0; i < sz; i++)
  {
    for (int j = 0; j < sz; j++)
    {
      for (int k = 0; k < sz; k++)
        c[i][j] += a[i][k] * b[k][j];

      c[i][j] %= 1000;
    }
  }

  return c;
}

m power(m a, long long int n)
{
  int sz = a.size();
  m res(sz, vector<int>(sz));

  for (int i = 0; i < sz; i++)
    res[i][i] = 1;

  while (n > 0)
  {
    if (n % 2)
      res = res * a;

    a = a * a;
    n /= 2;
  }

  return res;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> b;

  m a(n, vector<int>(n));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  }

  m ans = power(a, b);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << ans[i][j] << " ";

    cout << '\n';
  }

  return 0;
}