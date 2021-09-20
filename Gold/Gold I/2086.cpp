#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<long long int>> m;

long long int a, b;
long long int mod = 1000000000LL;

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

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  a += 1;
  b += 2;

  m a_ans = {{1, 0}, {0, 1}};
  m a_fibo = {{1, 1}, {1, 0}};
  m b_ans = {{1, 0}, {0, 1}};
  m b_fibo = {{1, 1}, {1, 0}};

  while(a)
  {
    if (a % 2)
      a_ans = a_ans * a_fibo;

    a_fibo = a_fibo * a_fibo;
    a /= 2;
  }

  while(b)
  {
    if (b % 2)
      b_ans = b_ans * b_fibo;

    b_fibo = b_fibo * b_fibo;
    b /= 2;
  }

  cout << ((b_ans[0][1] - a_ans[0][1]) > 0 ? b_ans[0][1] - a_ans[0][1] : (b_ans[0][1] - a_ans[0][1] + mod) % mod);

  return 0;
}