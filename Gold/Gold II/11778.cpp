#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<long long int>> m;

long long int a, b, n;
long long int mod = 1000000007LL;

m operator * (const m &a, const m &b)
{
  int sz = a.size();
  m c(sz, vector<long long int>(sz));

  for (int i = 0; i < sz; i++)
  {
    for (int j = 0; j < sz; j++)
    {
      for (int k = 0; k < sz; k++)
        c[i][j] += a[i][k] * b[k][j];

      c[i][j] %= mod;
    }
  }

  return c;
}

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;

    if (a % b == 0)
        return b;

    else
        return gcd(b, a % b);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  m ans = {{1, 0}, {0, 1}};
  m fibo = {{1, 1}, {1, 0}};

  n = gcd(a, b);

  while(n)
  {
    if (n % 2)
      ans = ans * fibo;

    fibo = fibo * fibo;
    n /= 2;
  }

  cout << ans[0][1];

  return 0;
}