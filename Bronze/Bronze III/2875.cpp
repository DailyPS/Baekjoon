#include <bits/stdc++.h>

using namespace std;

int n, m, k;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> k;

  int ans = 0;

  while (n >= 2 && m >= 1 && (n + m) >= k + 3)
  {
    n -= 2;
    m -= 1;
    ans ++;
  }

  cout << ans;

  return 0;
}