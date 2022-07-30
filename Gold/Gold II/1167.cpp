#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> g[100005];
bool visited[100005] = { 0 };
int dp[100005] = { 0 };
int n, farthest_v, max_cost = 0;;

void dfs(int n, int cost)
{
  if (visited[n])
    return;

  if (cost > max_cost)
  {
    max_cost = cost;
    farthest_v = n;
  }

  visited[n] = true;

  for (auto i : g[n])
  {
    if (!visited[i.first])
      dfs(i.first, cost + i.second);
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int s, e, c;
    
    cin >> s >> e;

    while (e != -1)
    {
      cin >> c;

      g[s].push_back(make_pair(e, c));

      cin >> e;
    }
  }

  dfs(1, 0);
  fill_n(visited, sizeof(visited), false);
  dfs(farthest_v, 0);

  cout << max_cost;

  return 0;
}