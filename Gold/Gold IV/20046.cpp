#include <bits/stdc++.h>

using namespace std;

int m, n;
int road[1005][1005];
int dist[1005][1005];
bool visited[1005][1005];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void dijkstra()
{
  priority_queue<pair<int, pair<int, int>>> pq;
  pq.push(make_pair(-road[0][0], make_pair(0, 0)));
  dist[0][0] = road[0][0];
  visited[0][0] = true;

  while(!pq.empty())
  {
    int now_cost = -pq.top().first;
    int x = pq.top().second.first;
    int y = pq.top().second.second;
    pq.pop();

    if (now_cost > dist[y][x])
      continue;

    for (int i = 0; i < 4; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || road[ny][nx] == -1)
        continue;
      
      int nxt_cost = now_cost + road[ny][nx];

      if (nxt_cost < dist[ny][nx])
      {
        dist[ny][nx] = nxt_cost;
        visited[ny][nx] = true;
        pq.push(make_pair(-nxt_cost, make_pair(nx, ny)));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> road[i][j];
      dist[i][j] = INT_MAX;
    }
  }

  if (road[0][0] == -1 || road[m - 1][n - 1] == -1)
  {
    cout << "-1";
    return 0;
  }

  dijkstra();

  cout << (dist[m - 1][n - 1] == INT_MAX ? -1 : dist[m - 1][n - 1]);

  return 0;
}