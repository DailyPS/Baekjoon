#include <bits/stdc++.h>

using namespace std;

int t;
long long int pill[35][35];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i <= 30; i++)
  {
    for (int j = 0; j <= 30; j++)
    {
      if (i > j)
        continue;

      if (i == 0)
        pill[j][i] = 1;

      else
        pill[j][i] = pill[j - 1][i] + pill[j][i - 1];
    }
  }

  while(true)
  {
    int n;
    cin >> n;

    if (n == 0)
      break;

    cout << pill[n][n] << "\n";
  }

  return 0;
}