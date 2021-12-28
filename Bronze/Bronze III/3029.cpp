#include <bits/stdc++.h>

using namespace std;

vector<string> v;
int t[5][5];
int diff[5];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 2; i++)
  {
    string s;
    cin >> s;
    v.push_back(s);
  }

  if (!v[0].compare(v[1]))
  {
    cout << "24:00:00";
    return 0;
  }

  for (int i = 0; i < 2; i++)
  {
    int len = v[i].length();
    int idx = 0;
    int tmp = 0;

    for (int j = 0; j < len; j++)
    {
      if (v[i][j] == ':')
      {
        t[i][idx] = tmp;
        tmp = 0;
        idx++;
      }

      else
        tmp = tmp * 10 + (v[i][j] - '0');
    }

    t[i][idx] = tmp;
  }

  for (int i = 2; i >= 0; i--)
  {
    diff[i] += t[1][i] - t[0][i];

    if (diff[i] < 0 && i == 0)
      diff[i] += 24;

    else if (diff[i] < 0)
    {
      diff[i] += 60;
      diff[i - 1] -= 1;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if (diff[i] / 10 == 0)
      cout << "0" << diff[i];

    else
      cout << diff[i];

    if (i < 2)
      cout << ":";
  }

  return 0;
}