#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
string s;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> s;

  int len = s.length();

  for (int i = 0; i < len; i++)
  {
    int o_count = 0;

    if (s[i] == 'O')
      continue;

    else
    {
      while (s[i + 1] == 'O' && s[i + 2] == 'I')
      {
        o_count++;

        if (o_count == n)
        {
          o_count--;
          ans++;
        }

        i += 2;
      }

      o_count = 0;
    }
  }

  cout << ans;

  return 0;
}