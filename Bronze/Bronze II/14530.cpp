#include <bits/stdc++.h>

using namespace std;

int x, y;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> x >> y;

  int ans = 0, cur = x, mul = 1, dir = 1;

  while (true)
  {
    while (true)
    {
      if (cur == y)
      {
        cout << ans;
        return 0;
      }

      if (cur == x + dir * mul)
        break;

      ans++;
      cur += dir;
    }

    dir *= -1;
    mul *= 2;
  }

  return 0;
}