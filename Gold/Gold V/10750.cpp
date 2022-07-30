#include <bits/stdc++.h>

using namespace std;

string s, t;
string censored = "";

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> s >> t;

  int t_len = t.length();
  int s_len = s.length();
  int c_len;

  for (int i = 0; i < s_len; i++)
  {
    censored += s[i];
    c_len = censored.length();

    if (c_len < t_len)
      continue;

    if (censored[c_len - 1] == t[t_len - 1])
    {
      if (!censored.compare(c_len - t_len, t_len, t))
      {
        for (int j = 0; j < t_len; j++)
          censored.pop_back();
      }
    }
  }

  cout << censored;

  return 0;
}