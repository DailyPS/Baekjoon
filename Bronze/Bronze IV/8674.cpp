#include <bits/stdc++.h>

using namespace std;

long long int a, b;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  long long int diff_vertical = (a % 2 ? 1 : 0) * b;
  long long int diff_horizon = (b % 2 ? 1 : 0) * a;

  cout << min(diff_horizon, diff_vertical);

  return 0;
}