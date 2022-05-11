#include <bits/stdc++.h>

#define INF 1e9

using namespace std;

int n, e, v1, v2;
vector<pair<int, long long int>> g[805];
long long int dist[805];
long long int one_to_v1, one_to_v2, v1_to_v2, v1_to_n, v2_to_v1, v2_to_n, ans = INF;

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

  if (e == 0) {
    cout << "-1";
    return 0;
  }

  for (int i = 0; i < e; i++)
  {
    int a, b, c;

    cin >> a >> b >> c;

    g[a].push_back(make_pair(b, c));
    g[b].push_back(make_pair(a, c));
  }

  cin >> v1 >> v2;

  for (int i = 0; i <= n; i++)
    dist[i] = INF;

  dijkstra(1);

  bool is_aroute = true, is_broute = true;
  one_to_v1 = dist[v1];
  one_to_v2 = dist[v2];

  for (int i = 0; i <= n; i++)
    dist[i] = INF;

  dijkstra(v1);

  v1_to_v2 = dist[v2];
  v1_to_n = dist[n];

  for (int i = 0; i <= n; i++)
    dist[i] = INF;

  dijkstra(v2);

  v2_to_v1 = dist[v1];
  v2_to_n = dist[n];

  is_aroute = (one_to_v1 == INF ? false : true);
  is_aroute = (v1_to_v2 == INF ? false : true);
  is_aroute = (v2_to_n == INF ? false: true);

  is_broute = (one_to_v2 == INF ? false : true);
  is_broute = (v2_to_v1 == INF ? false : true);
  is_broute = (v1_to_n == INF ? false : true);

  if (!is_aroute && !is_broute)
  {
    cout << "-1";
    return 0;
  }

  else {
    if (!is_aroute) {
      ans = one_to_v2 + v2_to_v1 + v1_to_n;
    }

    else if (!is_broute) {
      ans = one_to_v1 + v1_to_v2 + v2_to_n;
    }

    else {
      int route1 = one_to_v2 + v2_to_v1 + v1_to_n;
      int route2 = one_to_v1 + v1_to_v2 + v2_to_n;
      ans = min(route1, route2);
    }
  }
    

  cout << ans;

  return 0;
}