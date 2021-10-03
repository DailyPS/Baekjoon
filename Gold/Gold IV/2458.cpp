#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
bool connect[505][505];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int a, b;

    cin >> a >> b;

    connect[a][b] = true;
  }

  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (connect[i][k] && connect[k][j])
          connect[i][j] = true;
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    int cnt = 0;

    for (int j = 1; j <= n; j++)
    {
      if (connect[i][j] || connect[j][i])
        cnt++;
    }

    if (cnt == n - 1)
      ans++;
  }

  cout << ans;

  return 0;
}