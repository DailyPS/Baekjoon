#include <bits/stdc++.h>

using namespace std;

int n, use;
int computer[35][35];

bool check_computer()
{
  int cnt;

  for (int i = 0; i < n; i++)
  {
    cnt = 0;

    for (int j = 0; j < n; j++)
    {
      if (computer[i][j] == use)
        cnt++;
    }

    if (cnt > n / 2)
    {
      for (int j = 0; j < n; j++)
        computer[i][j] = use;
    }

    cnt = 0;

    for (int j = 0; j < n; j++)
    {
      if (computer[j][i] == use)
        cnt++;
    }

    if (cnt > n / 2)
    {
      for (int j = 0; j < n; j++)
        computer[j][i] = use;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (computer[i][j] != use)
        return false;
    }
  }

  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> use;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> computer[i][j];
  }

  bool possible = check_computer();
  possible = check_computer();

  if (possible)
    cout << "1";

  else
    cout << "0";

  return 0;
}