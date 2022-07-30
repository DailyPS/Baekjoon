#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int a, b, c, m;
  int tired = 0;
  int ans = 0;

  cin >> a >> b >> c >> m;

  for (int i = 0; i < 24; i++)
  {
    if (tired + a > m)
    {
      tired -= c;

      if (tired < 0)
        tired = 0;
    }

    else
    {
      tired += a;
      ans += b;
    }
  }

  cout << ans;

  return 0;
}