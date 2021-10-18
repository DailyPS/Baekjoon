#include <bits/stdc++.h>

using namespace std;

int m, n, k;
char original[15][15];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n >> k;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> original[i][j];
  }

  for (int i = 0; i < m; i++)
  {
    for (int q = 0; q < k; q++)
    {
      for (int j = 0; j < n; j++)
      {
        for (int l = 0; l < k; l++)
          cout << original[i][j];
      }

      cout << "\n";
    }
  }


  return 0;
}