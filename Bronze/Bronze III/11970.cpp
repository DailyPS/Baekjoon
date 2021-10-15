#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c >> d;

  int ans = (b - a) + (d - c);
  int inter = max(min(b, d) - max(a, c), 0);
  ans -= inter;
  cout << ans;

  return 0;
}