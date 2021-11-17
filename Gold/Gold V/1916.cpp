#include <bits/stdc++.h>

using namespace std;

int n, m, start, fin;
vector<pair<int, int>> g[1005];
int dist[1005];

void dijkstra(int start)
{
  dist[start] = 0;
  priority_queue<pair<int, int>> pq;
  pq.push(make_pair(dist[start], start));

  while (!pq.empty())
  {
    int now = pq.top().second;
    int now_dist = -pq.top().first;
    pq.pop();

    if (dist[now] < now_dist)
      continue;

    for (auto& i : g[now])
    {
      int nxt_cost = i.second + now_dist;

      if (nxt_cost < dist[i.first])
      {
        dist[i.first] = nxt_cost;
        pq.push(make_pair(-nxt_cost, i.first));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
    dist[i] = 1e8;

  for (int i = 0; i < m; i++)
  {
    int s, e, c;

    cin >> s >> e >> c;

    g[s].push_back(make_pair(e, c));
  }

  cin >> start >> fin;

  dijkstra(start);

  cout << dist[fin];

  return 0;
}