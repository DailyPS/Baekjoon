#include <bits/stdc++.h>

using namespace std;

int n, m;
string c[105][105];

string StringAdd(string a, string b)
{
  string ret;
  int sum = 0;

  while (!a.empty() || !b.empty() || sum > 0)
  {
    if (!a.empty())
    {
      sum += a.back() - '0';
      a.pop_back();
    }

    if (!b.empty())
    {
      sum += b.back() - '0';
      b.pop_back();
    }

    ret.push_back((sum % 10) + '0');
    sum /= 10;
  }

  reverse(ret.begin(), ret.end());
  return ret;
}

string combination(int n , int m)
{
  if (n == m || m == 0)
    return "1";

  string& ret = c[n][m];

  if (!ret.empty())
    return ret;

  ret = StringAdd(combination(n - 1, m), combination(n - 1, m - 1));
  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  cout << combination(n, m);

  return 0;
}