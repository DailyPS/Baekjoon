#include <bits/stdc++.h>

using namespace std;

int a, b, c, d;
int ans[5], deliver[5];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c >> d;

  for (int i = 0; i < 3; i++)
  {
    cin >> deliver[i];
    
    int d1 = deliver[i] % (a + b);
    int d2 = deliver[i] % (c + d);

    ans[i] = (d1 <= a && d1 ? 1 : 0) + (d2 <= c && d2 ? 1 : 0);
  }

  for (int i = 0; i < 3; i++)
    cout << ans[i] << "\n";

  return 0;
}