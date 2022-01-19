#include <bits/stdc++.h>

using namespace std;

int n, d;
int dist[10005];
vector<pair<int, int>> g[10005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> d;

  for (int i = 0; i <= d; i++)
    dist[i]= i;

  for (int i = 0; i < n; i++)
  {
    int v1, v2, len;
    cin >> v1 >> v2 >> len;

    if (v2 - v1 <= len)
      continue;

    if (v2 > d)
      continue;

    g[v1].push_back(make_pair(v2, len));
  }

  int prev = -1;

  for (int i = 0; i <= d; i++)
  {
    if (i)
      prev = dist[i - 1];

    dist[i] = min(dist[i], prev + 1);

    for (auto &nxt : g[i])
    {
      if (dist[nxt.first] > dist[i] + nxt.second)
        dist[nxt.first] = dist[i] + nxt.second;
    }
  }

  cout << dist[d];

  return 0;
}