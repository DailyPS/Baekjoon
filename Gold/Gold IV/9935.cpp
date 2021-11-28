#include <bits/stdc++.h>

using namespace std;

string s, bomb, ans;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  
  cin >> s >> bomb;

  int s_len = s.length();
  int b_len = bomb.length();

  for (int i = 0; i < s_len; i++)
  {
    ans += s[i];

    int ans_len = ans.length();

    if (ans_len < b_len)
      continue;

    if (!ans.compare(ans_len - b_len, b_len, bomb))
      ans.erase(ans_len - b_len, b_len);
  }

  if (!ans.empty())
    cout << ans;

  else
    cout << "FRULA";

  return 0;
}