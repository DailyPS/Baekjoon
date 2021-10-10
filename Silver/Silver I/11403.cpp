#include <bits/stdc++.h>

using namespace std;

int n;
int g[105][105];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> g[i][j];
  }

  for (int k = 0; k < n; k++)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (g[i][k] && g[k][j])
          g[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << g[i][j] << " ";

    cout << "\n";
  }

  return 0;
}