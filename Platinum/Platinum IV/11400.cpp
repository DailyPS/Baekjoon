#include <bits/stdc++.h>

using namespace std;

int v, e;

vector<int> g[100005];
vector<pair<int, int>> bridge;
int order[100005];
int order_num = 1;

int dfs(int node, int parent)
{
  order[node] = order_num++;
  int ret = order[node];

  for (auto &i : g[node])
  {
    if (i == parent)
      continue;

    if (!order[i])
    {
      int early = dfs(i, node);

      if (early > order[node])
        bridge.push_back(make_pair(min(node, i), max(node, i)));

      ret = min(ret, early);
    }

    else
      ret = min(ret, order[i]);
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> v >> e;

  for (int i = 0; i <= e; i++)
  {
    int a, b;

    cin >> a >> b;

    g[a].push_back(b);
    g[b].push_back(a);
  }

  dfs(1, 0);

  sort(bridge.begin(), bridge.end());
  int sz = bridge.size();

  cout << sz << "\n";

  for (int i = 0; i < sz; i++)
    cout << bridge[i].first << " " << bridge[i].second << "\n";

  return 0;
}