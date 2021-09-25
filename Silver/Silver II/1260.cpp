#include <bits/stdc++.h>

using namespace std;

int n, m, v;

int dfs_visited[1005] = { 0 };
int bfs_visited[1005] = { 0 };

queue<int> q;
vector<int> g[1005];

void dfs(int n)
{
  dfs_visited[n] = 1;

  cout << n << " ";

  for (auto& i : g[n])
  {
    if (!dfs_visited[i])
      dfs(i);
  }
}

void bfs(int n)
{
  bfs_visited[n] = 1;
  q.push(n);

  while(!q.empty())
  {
    int now = q.front();
    q.pop();

    cout << now << " ";

    for (auto& i : g[now])
    {
      if (!bfs_visited[i])
      {
        bfs_visited[i] = 1;
        q.push(i);
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> v;

  for (int i = 0; i < m; i++)
  {
    int v1, v2;

    cin >> v1 >> v2;

    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  for (int i = 1; i <= n; i++)
    sort(g[i].begin(), g[i].end());

  dfs(v);
  cout << "\n";
  bfs(v);

  return 0;
}