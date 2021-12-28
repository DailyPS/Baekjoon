#include <bits/stdc++.h>

using namespace std;

string s;
int cup[5];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> s;

  int len = s.length();

  cup[1] = 1;

  for (int i = 0; i < len; i++)
  {
    if (s[i] == 'A')
    {
      int tmp = cup[1];
      cup[1] = cup[2];
      cup[2] = tmp;
    }

    else if (s[i] == 'B')
    {
      int tmp = cup[2];
      cup[2] = cup[3];
      cup[3] = tmp;
    }

    else if (s[i] == 'C')
    {
      int tmp = cup[3];
      cup[3] = cup[1];
      cup[1] = tmp;
    }
  }

  for (int i = 1; i <= 3; i++)
  {
    if (cup[i])
    {
      cout << i;
      return 0;
    }
  }

  return 0;
}