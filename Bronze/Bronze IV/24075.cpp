#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  cout << max(a + b, a - b) << "\n" << min(a + b, a - b);

  return 0;
}