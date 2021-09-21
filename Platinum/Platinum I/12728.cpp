#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<long long int>> m;

long long int t, n;
long long int mod = 1000LL;

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

  cin >> t;

  for (long long int i = 1; i <= t; i++)
  {
    cin >> n;

    m unit = {{1, 0}, {0, 1}};
    m expo = {{6, -4}, {1, 0}};
    string ans;

    while(n)
    {
      if (n % 2)
        unit = unit * expo;

      expo = expo * expo;
      n /= 2;
    }

    ans = to_string((((6 * unit[1][0] + 2 * unit[1][1]) - 1) + mod) % mod);
    
    while(ans.length() < 3)
      ans.insert(ans.begin(), '0');

    cout << "Case #" << i << ": " << ans << "\n";
  }

  return 0;
}