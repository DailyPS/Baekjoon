#include <bits/stdc++.h>

using namespace std;

int n, m, r;
int item[105];
int a[105][105];
int ans = -1;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> r;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i != j)
        a[i][j] = 100000;
    }
  }

  for (int i = 1; i <= n; i++)
    cin >> item[i];

  for (int i = 0; i < r; i++)
  {
    int v1, v2, d;
    cin >> v1 >> v2 >> d;
    a[v1][v2] = d;
    a[v2][v1] = d;
  }

  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
    }
  }

  for (int i = 1; i <= n; i++)
  {
    int item_sum = 0;

    for (int j = 1; j <= n; j++)
    {
      if (a[i][j] <= m)
        item_sum += item[j];
    }

    ans = max(ans, item_sum);
  }

  cout << ans;

  return 0;
}