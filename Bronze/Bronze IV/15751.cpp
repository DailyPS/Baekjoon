#include <bits/stdc++.h>

using namespace std;

int a, b, x, y;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> x >> y;

  int tel1 = abs(a - x) + abs(b - y);
  int tel2 = abs(a - y) + abs(b - x);
  int tel3 = abs(a - b);

  cout << min({ tel1, tel2, tel3 });

  return 0;
}