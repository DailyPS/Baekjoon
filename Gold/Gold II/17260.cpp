#include <bits/stdc++.h>

using namespace std;

int n, k, max_height = -1;
int height[200005];
bool valid = false, visited[200005];
vector<int> g[200005];

void dfs(int node, int h)
{
  visited[node] = true;

  if (valid || h > 1000000)
    return;

  if (height[node] >= h)
    valid = true;

  for (auto &i : g[node])
  {
    if (!visited[i])
    {
      int nxt_h = (h - height[node]) * 2 + height[node];
      dfs(i, nxt_h);
    }
  }

  return;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 1; i <= n; i++)
  {
    cin >> height[i];
    max_height = max(max_height, height[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    int v1, v2;
    
    cin >> v1 >> v2;

    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  visited[k] = true;
  int sz = g[k].size();

  for (int i = 0; i < sz; i++)
    dfs(g[k][i], height[k]);

  if (valid)
    cout << "1";

  else
    cout << "0";

  return 0;
}