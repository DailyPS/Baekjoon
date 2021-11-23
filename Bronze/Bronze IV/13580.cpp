#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c;

  if (a - b == 0 || b - c == 0 || c - a == 0)
    cout << "S";

  else if (a + b - c == 0 || b + c - a == 0 || c + a - b == 0)
    cout << "S";

  else if (a - (b + c) == 0 || b - (c + a) == 0 || c - (a + b) == 0)
    cout << "S";

  else
    cout << "N";

  return 0;
}