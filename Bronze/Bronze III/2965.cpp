#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c;

  int len1 = b - a;
  int len2 = c - b;

  if (len1 >= len2)
    cout << len1 - 1;

  else
    cout << len2 - 1;

  return 0;
}