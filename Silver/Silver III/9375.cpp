#include <bits/stdc++.h>

using namespace std;

int t;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n, ans = 1;
    map <string, int> cloth;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
      string s1, s2;

      cin >> s1 >> s2;

      cloth[s2]++;
    }

    for (auto iter = cloth.begin(); iter != cloth.end(); iter++)
      ans *= (iter->second + 1);

    cout << ans - 1 << "\n";
  }
  return 0;
}