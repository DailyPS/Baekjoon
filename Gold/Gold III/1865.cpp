#include <bits/stdc++.h>

using namespace std;

int t;
int dist[505], visited[505];
bool inque[505];

int main(void)
{
  //cin.tie(NULL);
  //ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n, m, w;
    vector<pair<int, int>> g[505];

    cin >> n >> m >> w;

    memset(dist, 1e9, sizeof(dist));
    memset(inque, 0, sizeof(inque));

    for (int i = 0; i < m; i++)
    {
      int s, e, t;

      cin >> s >> e >> t;

      g[s].push_back(make_pair(e, t));
      g[e].push_back(make_pair(s, t));
    }

    for (int i = 0; i < w; i++)
    {
      int s, e, t;

      cin >> s >> e >> t;

      g[s].push_back(make_pair(e, -t));
    }

    bool is_cycle = false;
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
      if (is_cycle)
        continue;

      memset(visited, 0, sizeof(visited));

      dist[i] = 0;
      visited[i]++;
      q.push(i);
      inque[i] = true;

      while(!q.empty())
      {
        int now = q.front();
        q.pop();
        inque[now] = false;

        if (is_cycle)
          break;

        for (auto& nxt : g[now])
        {
          if (dist[nxt.first] > dist[now] + nxt.second)
          {
            dist[nxt.first] = dist[now] + nxt.second;
            visited[nxt.first]++;

            if (inque[nxt.first])
              continue;

            if (visited[nxt.first] < n)
            {
              q.push(nxt.first);
              inque[nxt.first] = true;
            }

            else
              is_cycle = true;
          }
        }
      }
    }

    cout << (is_cycle ? "YES\n" : "NO\n");
  }

  return 0;
}