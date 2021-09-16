#include <bits/stdc++.h>

using namespace std;

int n, a, b;

vector<pair<int, int>> g[100005];

bool visited[100005] = { 0 };
int max_path[100005] = { 0 };
int dist[100005] = { 0 };

void dfs(int room, int length, int maxp)
{
  visited[room] = true;
  max_path[room] = maxp;
  dist[room] = length;

  for (auto i : g[room])
  {
    if (!visited[i.first])
      dfs(i.first, length + i.second, max(maxp, i.second));
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> a >> b;

  if (a == b)
  {
    cout << "0";
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    int s, e, l;

    cin >> s >> e >> l;

    g[s].push_back(make_pair(e, l));
    g[e].push_back(make_pair(s, l));
  }

  dfs(a, 0, 0);

  cout << dist[b] - max_path[b];

  return 0;
}