#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;
int e, f, g, h;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c >> d >> e >> f >> g >> h;

  if (b > f && d < h)
  {
    if (c > e && c < g)
      c = e;

    if (a < g && a > e)
      a = g;
  }

  if (a > e && c < g)
  {
    if (d > f && d < h)
      d = f;

    if (b < h && b > f)
      b = h;
  }

  cout << (c - a) * (d - b);

  return 0;
}