#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while(true)
  {
    string s;

    cin >> s;

    if (!s.compare("#"))
      break;

    int len = s.length();
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
      if (s[len - i - 1] == '-')
        sum += 0 * pow(8, i);

      else if (s[len - i - 1] == '\\')
        sum += 1 * pow(8, i);

      else if (s[len - i - 1] == '(')
        sum += 2 * pow(8, i);

      else if (s[len - i - 1] == '@')
        sum += 3 * pow(8, i);

      else if (s[len - i - 1] == '?')
        sum += 4 * pow(8, i);

      else if (s[len - i - 1] == '>')
        sum += 5 * pow(8, i);

      else if (s[len - i - 1] == '&')
        sum += 6 * pow(8, i);

      else if (s[len - i - 1] == '%')
        sum += 7 * pow(8, i);

      else if (s[len - i - 1] == '/')
        sum += -1 * pow(8, i);
    }

    cout << sum << "\n";
  }

  return 0;
}