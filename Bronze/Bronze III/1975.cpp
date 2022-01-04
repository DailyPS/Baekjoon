#include <bits/stdc++.h>

using namespace std;

int t;

int getZero(int n, int i)
{
  int ret = 0;

  while (n)
  {
    if (n % i)
      break;

    ret++;
    n /= i;
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;

    cin >> n;

    if (n == 1)
      cout << "0\n";

    else
    {
      int ans = 1;

      for (int i = 2; i < n; i++)
        ans += getZero(n, i);

      cout << ans << "\n";
    }
  }

  return 0;
}