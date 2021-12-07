#include <bits/stdc++.h>

using namespace std;

int m, s, g;
double a, b;
int l, r;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> s >> g;
  cin >> a >> b;
  cin >> l >> r;

  double stand = (double) m / s + r / b;
  double walk = (double) m / g + l / a;

  if (stand > walk)
    cout << "friskus";

  else
    cout << "latmask";

  return 0;
}