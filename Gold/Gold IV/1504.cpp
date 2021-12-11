#include <bits/stdc++.h>

using namespace std;

int n, e, v1, v2;
vector<pair<int, int>> g[805];
int dist[805];
int route1, route2, ans = INT_MAX;

void dijkstra(int start)
{
  priority_queue<pair<int, int>> pq;
  dist[start] = 0;
  pq.push(make_pair(0, start));

  while (!pq.empty())
  {
    int now_cost = -pq.top().first;
    int cur = pq.top().second;
    pq.pop();

    for (auto &i : g[cur])
    {
      int nxt = i.first;
      int nxt_cost = now_cost + i.second;

      if (dist[nxt] > nxt_cost)
      {
        dist[nxt] = nxt_cost;
        pq.push(make_pair(-nxt_cost, nxt));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> e;

  for (int i = 0; i < e; i++)
  {
    int a, b, c;

    cin >> a >> b >> c;

    g[a].push_back(make_pair(b, c));
    g[b].push_back(make_pair(a, c));
  }

  cin >> v1 >> v2;

  for (int i = 0; i <= n; i++)
    dist[i] = INT_MAX;

  dijkstra(1);

  bool is_aroute = true, is_broute = true;
  route1 = dist[v1];
  route2 = dist[v2];
  is_aroute = (route1 == INT_MAX ? false : true);
  is_broute = (route2 == INT_MAX ? false : true);

  for (int i = 0; i <= n; i++)
    dist[i] = INT_MAX;

  dijkstra(v1);

  route1 = (is_aroute ? route1 + dist[v2] : INT_MAX);
  route2 = (is_broute ? route2 + dist[v2] : INT_MAX);

  for (int i = 0; i <= n; i++)
    dist[i] = INT_MAX;

  dijkstra(v2);

  route1 = (is_aroute ? route1 + dist[n] : INT_MAX);
  
  for (int i = 0; i <= n; i++)
    dist[i] = INT_MAX;

  dijkstra(v1);

  route2 = (is_broute ? route2 + dist[n] : INT_MAX);

  if (!is_aroute && !is_broute)
  {
    cout << "-1";
    return 0;
  }

  else
    ans = min(route1, route2);

  cout << (ans == INT_MAX ? -1 : ans);

  return 0;
}