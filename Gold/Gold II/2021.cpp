#include <bits/stdc++.h>

using namespace std;

int n, l, s, e;
vector<int> g[200005];
int dist[200005];

int bfs()
{
  queue<int> q;
  dist[s] = 0;
  q.push(s);

  while (!q.empty())
  {
    int cur = q.front();
    q.pop();

    if (cur == e)
      return (dist[cur] - 1 > 0 ? dist[cur] - 1 : 0);

    for (auto &nxt : g[cur])
    {
      if (dist[nxt] > -1)
        continue;

      if (nxt > 100000)
        dist[nxt] = dist[cur] + 1;

      else
        dist[nxt] = dist[cur];

      q.push(nxt);
    }
  }

  return -1;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  memset(dist, -1, sizeof(dist));

  cin >> n >> l;

  for (int i = 1; i <= l; i++)
  {
    while (true)
    {
      int station;
      cin >> station;

      if (station == -1)
        break;

      g[station].push_back(i + 100000);
      g[i + 100000].push_back(station);
    }
  }

  cin >> s >> e;

  cout << bfs();

  return 0;
}