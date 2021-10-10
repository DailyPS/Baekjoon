#include <bits/stdc++.h>

using namespace std;

int t;
int m, n, x, y;

int gcd(int a, int b)
{
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int lcm(int a, int b)
{
  return a * b / gcd(a, b);
}


int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    cin >> m >> n >> x >> y;

    int cx = x;
    int cy = (x % n == 0 ? n : x % n);
    int cnt = x;
    int limit = lcm(m, n);

    while(true)
    {
      if (cnt > limit)
      {
        cout << "-1\n";
        break;
      }

      if (cy == y)
      {
        cout << cnt << "\n";
        break;
      }

      cy = ((cy + m) % n == 0 ? n : (cy + m) % n);
      cnt += m;
    }
  }
  return 0;
}