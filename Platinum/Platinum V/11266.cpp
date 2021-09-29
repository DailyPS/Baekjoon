#include <bits/stdc++.h>

using namespace std;

int v, e;
int dfs_num = 1;
int cnt = 0;

vector<int> g[10005];

int order[10005] = { 0 };
bool isCurVertex[10005] = { 0 };

int dfs(int n, bool root)
{
  order[n] = dfs_num++;
  int ret = order[n];
  int child = 0;

  for (auto& i : g[n])
  {
    if (!order[i])
    {
      child++;

      int early = dfs(i, false);

      if (!root && early >= order[n])
        isCurVertex[n] = true;

      ret = min(ret, early);
    }

    else
      ret = min(ret, order[i]);
  }

  if (root && child >= 2)
    isCurVertex[n] = true;

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> v >> e;

  for (int i = 0; i < e; i++)
  {
    int v1, v2;

    cin >> v1 >> v2;

    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  for (int i = 1; i <= v; i++)
  {
    if (!order[i])
      dfs(i, true);
  }

  for (int i = 1; i <= v; i++)
  {
    if (isCurVertex[i])
      cnt++;
  }

  cout << cnt << "\n";

  for (int i = 1; i <= v; i++)
  {
    if (isCurVertex[i])
      cout << i << " ";
  }

  return 0;
}