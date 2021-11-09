#include <bits/stdc++.h>

using namespace std;

int n;
string s, rs;
int lcs[5005][5005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> s;
  rs = s;
  reverse(rs.begin(), rs.end());

  int len = s.length();

  s = "0" + s;
  rs = "0" + rs;

  for (int i = 1; i <= len; i++)
  {
    for (int j = 1; j <= len; j++)
    {
      if (s[i] == rs[j])
        lcs[i][j] = lcs[i - 1][j - 1] + 1;
      
      else
        lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
    }
  }

  cout << len - lcs[len][len];

  return 0;
}