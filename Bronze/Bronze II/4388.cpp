#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while (true)
  {
    cin >> n >> m;

    if (n == 0 & m == 0)
      break;

    int k = 0;
    int ans = 0;
    int carry = 0;

    while (n != 0 || m != 0)
    {
      int tmp = (n % 10) + (m % 10) + carry;
      ans += (tmp / 10 == 1 ? 1 : 0);
      carry = (tmp / 10 == 1 ? 1 : 0);
      n /= 10;
      m /= 10;
    }

    cout << ans << "\n";
  }

  return 0;
}