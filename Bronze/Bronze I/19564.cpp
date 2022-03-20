#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  string s;

  cin >> s;

  int len = s.length();
  int ans = 0;

  for (int i = 0; i < len - 1; i++)
  {
    if (s[i] - 'a' < s[i + 1] - 'a')
      continue;

    else
      ans++;
  }

  cout << ans + 1;

  return 0;
}