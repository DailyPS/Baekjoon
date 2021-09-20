#include <bits/stdc++.h>

using namespace std;

int n;

string fibo(string &a, string &b)
{
  string c(b.length(), '0');
  bool carry = false;

  int sz = c.length();
  int len_a = a.length();
  int len_b = b.length();

  for (int i = 0; i < sz; i++)
  {
    int tmp = carry;
    carry = false;

    if (i < len_a)
      tmp += a[len_a - i - 1] - '0';

    if (i < len_b)
      tmp += b[len_b - i - 1] - '0';

    if (tmp >= 10)
    {
      tmp %= 10;
      carry = true;
    }

    c[sz - i - 1] = tmp + '0';
  }

  if (carry)
    c.insert(c.begin(), '1');

  return c;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  string a = "0";
  string b = "1";

  if (n == 0)
    cout << a;

  else if (n == 1)
    cout << b;

  else
  {
    string c;

    for (int i = 0; i < n - 1; i++)
    {
      c = fibo(a, b);
      a = b;
      b = c;
    }

    cout << c;
  }

  return 0;
}