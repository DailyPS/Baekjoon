#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int max_cost = -1;

vector<pair<int, int>> g[100005];
int pos_friend[5];
int dist[3][100005];

void dijkstra(int f, int start)
{
  priority_queue<pair<int, int>> pq;

  pq.push(make_pair(0, start));
  dist[f][start] = 0;

  while(!pq.empty())
  {
    int cur_dist = -pq.top().first;
    int cur_node = pq.top().second;

    pq.pop();

    for (auto& i : g[cur_node])
    {
      int cost = cur_dist + i.second;

      if (cost < dist[f][i.first])
      {
        dist[f][i.first] = cost;
        pq.push(make_pair(-cost, i.first));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < 3; i++)
    cin >> pos_friend[i];

  cin >> m;

  for (int i = 0; i < m; i++)
  {
    int d, e, l;

    cin >> d >> e >> l;

    g[d].push_back(make_pair(e, l));
    g[e].push_back(make_pair(d, l));
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 1; j <= n; j++)
      dist[i][j] = INT_MAX;
  }

  for (int i = 0; i < 3; i++) 
    dijkstra(i, pos_friend[i]);

  for (int i = 1; i <= n; i++)
  {
    int min_dist = INT_MAX;

    for (int j = 0; j < 3; j++)
      min_dist = min(min_dist, dist[j][i]);

    if (max_cost < min_dist)
    {
      max_cost = min_dist;
      ans = i;
    }
  }

  cout << ans;

  return 0;
}