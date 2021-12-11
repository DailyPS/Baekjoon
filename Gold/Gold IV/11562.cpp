#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int road[255][255];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i != j)
        road[i][j] = 10000;
    }
  }

  for (int i = 0; i < m; i++)
  {
    int u, v, b;
    cin >> u >> v >> b;

    road[u][v] = 0;
    road[v][u] = (b ? 0 : 1);
  }
  
  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
        road[i][j] = min(road[i][j], road[i][k] + road[k][j]);
    }
  }

  cin >> k;

  for (int i = 0; i < k; i++)
  {
    int s, e;
    cin >> s >> e;
    cout << road[s][e] << "\n";
  }

  return 0;
}