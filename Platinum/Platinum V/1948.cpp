#include <bits/stdc++.h>

using namespace std;

int n, m, fs, fe, road_cnt = 0;

int level[10005], cost[10005];
bool visited[10005];

vector<pair<int, int>> g[10005], rg[10005];
queue<pair<int, int>> q;
queue<int> rq;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int s, e, c;

    cin >> s >> e >> c;

    g[s].push_back(make_pair(e, c));
    rg[e].push_back(make_pair(s, c));
    level[e]++;
  }

  cin >> fs >> fe;

  // Topological Sort
  q.push(make_pair(fs, 0));

  while(!q.empty())
  {
    int cur = q.front().first;
    int cur_cost = q.front().second;
    q.pop();

    for (auto& i : g[cur])
    {
      level[i.first]--;
      cost[i.first] = max(cost[i.first], cur_cost + i.second);

      if (!level[i.first])
        q.push(make_pair(i.first, cost[i.first]));
    }
  }

  cout << cost[fe] << "\n";

  // Tracking with BFS
  rq.push(fe);
  visited[fe] = true;

  while(!rq.empty())
  {
    int cur = rq.front();
    rq.pop();

    for (auto& i : rg[cur])
    {
      if (cost[cur] - i.second == cost[i.first])
      {
        road_cnt++;

        if (!visited[i.first])
        {
          visited[i.first] = true;
          rq.push(i.first);
        }
      }
    }
  }

  cout << road_cnt;

  return 0;
}