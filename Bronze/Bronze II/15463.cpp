#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;
int e, f, g, h;
int i, j, k, l;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

  int ans = (c - a) * (d - b) + (g - e) * (h - f);
  int inter1 = max(min(c, k) - max(a, i), 0) * max(min(d, l) - max(b, j), 0);
  int inter2 = max(min(g, k) - max(e, i), 0) * max(min(h, l) - max(f, j), 0);

  ans = ans - inter1 - inter2;
  cout << ans;

  return 0;
}