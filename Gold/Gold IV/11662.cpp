#include <bits/stdc++.h>

using namespace std;

int ax, ay, bx, by, cx, cy, dx, dy;

double get_distance(double x)
{
  double mx = ax + (bx - ax) * (x / 100);
  double my = ay + (by - ay) * (x / 100);
  double kx = cx + (dx - cx) * (x / 100);
  double ky = cy + (dy - cy) * (x / 100);

  return sqrt(pow(kx - mx, 2) + pow(ky - my, 2));
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

  double l = 0, h = 100, p, q, ans = 20000;

  while (h - l >= 1e-6)
  {
    p = (2 * l + h) / 3;
    q = (l + 2 * h) / 3;

    double p_len = get_distance(p);
    double q_len = get_distance(q);

    ans = min(ans, min(p_len, q_len));

    if (p_len >= q_len)
      l = p;

    else
      h = q;
  }

  cout << fixed;
  cout.precision(10);
  cout << ans;

  return 0;
}