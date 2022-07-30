#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  cout << ((a + b) % 12 == 0 ? 12 : (a + b) % 12);

  return 0;
}