#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c;

  cout << ((c >= a && c < b) ? 1 : 0);

  return 0;
}