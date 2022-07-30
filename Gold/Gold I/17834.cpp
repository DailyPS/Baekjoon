#include <bits/stdc++.h>

#define RED 1
#define BLUE 2

using namespace std;

int n, m;
vector<int> g[50005];
int visited[50005] = { 0 };

int cnt_red = 0;
int cnt_blue = 0;

void dfs(int n)
{
  if (!visited[n])
  {
    visited[n] = RED;
    cnt_red++;
  }  

  for (auto& i : g[n])
  {
    if (!visited[i])
    {
      if (visited[n] == RED)
      {
        visited[i] = BLUE;
        cnt_blue++;
      }

      else if (visited[n] == BLUE)
      {
        visited[i] = RED;
        cnt_red++;
      }

      dfs(i);
    }
  }
}

bool check_bipartite() {
  for (int i = 1; i <= n; i++)
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

  cin >> n >> m;

  for (int i = 0; i < m; i++)
    {
      int v1, v2;

      cin >> v1 >> v2;

      g[v1].push_back(v2);
      g[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++)
    {
      if (!visited[i])
        dfs(i);
    }

  if (check_bipartite())
      cout << cnt_red * cnt_blue * 2;

    else
      cout << "0";

  return 0;
}