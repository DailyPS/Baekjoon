#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;

int visited[500005] = { 0 };
vector<int> g[500005];

void dfs(int n, int dist)
{
  if (n != 1 && g[n].size() == 1)
  {
    ans += dist;
    return;
  }

  visited[n] = 1;

  for (auto& i : g[n])
  {
    if (!visited[i])
      dfs(i, dist + 1);
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

  dfs(1, 0);

  cout << (ans % 2 ? "Yes" : "No");

  return 0;
}