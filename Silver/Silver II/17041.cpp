#include <bits/stdc++.h>

using namespace std;

int n;
int a[105], b[105];
string s[105];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> s[i] >> a[i] >> b[i];

  int low = -1e9, high = 1e9;

  for (int i = n - 1; i >= 0; i--)
  {
    if (!s[i].compare("none"))
    {
      low = max(low, a[i]);
      high = min(high, b[i]);
    }

    else if (!s[i].compare("off"))
    {
      low += a[i];
      high += b[i];
    }

    else if (!s[i].compare("on"))
    {
      low -= b[i];
      high -= a[i];
      low = max(0, low);
    }
  }

  cout << low << " " << high << "\n";

  low = -1e9, high = 1e9;

  for (int i = 0; i < n; i++)
  {
    if (!s[i].compare("none"))
    {
      low = max(low, a[i]);
      high = min(high, b[i]);
    }

    else if (!s[i].compare("on"))
    {
      low += a[i];
      high += b[i];
    }

    else if (!s[i].compare("off"))
    {
      low -= b[i];
      high -= a[i];
      low = max(0, low);
    }
  }

  cout << low << " " << high;

  return 0;
}