#include <bits/stdc++.h>

#define RED 1
#define BLUE 2

using namespace std;

int k, v, e;
vector<int> g[20005];
queue<int> q;
int visited[20005] = { 0 };

/*void bfs(int n)
{
  int color = RED;

  visited[n] = RED;
  q.push(n);

  while(!q.empty())
  {
    int now = q.front();
    q.pop();

    if (visited[now] == RED)
      color = BLUE;

    else
      color = RED;

    for (auto& i : g[n])
    {
      if (!visited[i])
      {
        visited[i] = color;
        q.push(i);
      }
    }
  }
}*/

void dfs(int n)
{
  if (!visited[n])
    visited[n] = RED;

  for (auto& i : g[n])
  {
    if (!visited[i])
    {
      if (visited[n] == RED)
        visited[i] = BLUE;

      else if (visited[n] == BLUE)
        visited[i] = RED;

      dfs(i);
    }
  }
}

bool check_bipartite() {
  for (int i = 1; i <= v; i++)
  {
    for (auto& j : g[i])
    {
      if (visited[i] == visited[j])
        return false;
    }
  }

  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> k;

  while(k--)
  {
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
      if (!visited[i])
        dfs(i);
    }

    if (check_bipartite())
      cout << "YES\n";

    else
      cout << "NO\n";

    for (int i = 1; i <= v; i++)
      g[i].clear();

    memset(visited, 0, sizeof(visited));
  }

  return 0;
}