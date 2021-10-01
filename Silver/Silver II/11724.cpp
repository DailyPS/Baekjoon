#include <bits/stdc++.h>

using namespace std;

int n, m;
int ans = 0;

vector<int> g[1005];
bool visited[1005];

void dfs(int n)
{
  visited[n] = true;

  for (auto& i : g[n])
  {
    if (!visited[i])
      dfs(i);
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int u, v;

    cin >> u >> v;

    g[u].push_back(v);
    g[v].push_back(u);
  }

  for (int i = 1; i <= n; i++)
  {
    if (!visited[i])
    {
      dfs(i);
      ans++;
    }
  }

  cout << ans;

  return 0;
}