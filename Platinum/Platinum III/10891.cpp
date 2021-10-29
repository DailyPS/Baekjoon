#include <bits/stdc++.h>

using namespace std;

int n, m;
bool cactus = true;
int order[100005];
vector<int> g[100005];

int dfs(int cur, int par)
{
  int cycle_cnt = 0;
  int cycle_back = 0;

  for (auto& i : g[cur])
  {
    if (i != par)
    {
      if (!order[i])
      {
        order[i] = order[cur] + 1;
        cycle_cnt += dfs(i, cur);
      }

      else if (order[cur] > order[i])
        cycle_cnt++;

      else if (order[cur] < order[i])
        cycle_back++;
    }
  }

  if (cycle_cnt > 1)
    cactus = false;

  return cycle_cnt - cycle_back;
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

  order[1] = 1;
  dfs(1, 0);

  cout << (cactus ? "Cactus" : "Not cactus");

  return 0;
}