#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int>> g[1005];
bool visited[1005];

int dfs(int node, int dist, int goal)
{
  if (node == goal)
    return dist;

  int ret = 0;

  visited[node] = true;

  for (auto &i : g[node])
  {
    if (!visited[i.first])
    {
      ret = max(ret, dfs(i.first, dist + i.second, goal));
      visited[i.first] = false;
    }
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < n - 1; i++)
  {
    int v1, v2, d;
    cin >> v1 >> v2 >> d;
    g[v1].push_back(make_pair(v2, d));
    g[v2].push_back(make_pair(v1, d));
  }

  for (int i = 0; i < m; i++)
  {
    int s, e;
    cin >> s >> e;
    cout << dfs(s, 0, e) << "\n";
    memset(visited, 0, sizeof(visited));
  }

  return 0;
}