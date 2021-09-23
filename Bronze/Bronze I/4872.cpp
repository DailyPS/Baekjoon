#include <bits/stdc++.h>

using namespace std;

int num[15];
int len;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while(true)
  {
    string s;

    cin >> s;

    if (cin.eof() == true)
    {
      for (int i = 0; i < len; i++)
        cout << num[i];

      return 0;
    }

    len = s.length();

    for (int i = 0; i < len; i++)
    {
      num[i] += s[i] - '0';
      num[i] %= 10;
    }
  }

  return 0;
}