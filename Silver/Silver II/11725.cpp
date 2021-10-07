#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> g[100005];
int parent[100005];
bool visited[100005];

void dfs(int node)
{
  visited[node] = true;

  for (auto& i : g[node])
  {
    if (!visited[i])
    {
      parent[i] = node;
      dfs(i); 
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n - 1; i++)
  {
    int v1, v2;

    cin >> v1 >> v2;

    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  parent[1] = 1;

  dfs(1);

  for (int i = 2; i <= n; i++)
    cout << parent[i] << "\n";

  return 0;
}