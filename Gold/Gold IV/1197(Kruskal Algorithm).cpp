#include <bits/stdc++.h>

using namespace std;

struct edge {
  int v1, v2, dist;

  edge(int a, int b, int c) {
    v1 = a;
    v2 = b;
    dist = c;
  }

  bool operator < (const edge& a) {
    return dist < a.dist;
  }
};

int v, e, ans = 0;
int parent[10005];
vector<edge> g;

int find(int x) {
  if (x == parent[x])
    return x;

  return parent[x] = find(parent[x]);
}

bool merge(int x, int y) {
  x = find(x);
  y = find(y);

  if (x == y)
    return false;

  parent[x] = y;
  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> v >> e;

  for (int i = 0; i < e; i++)
  {
    int v1, v2, w;

    cin >> v1 >> v2 >> w;

    g.push_back(edge(v1, v2, w));
  }

  sort(g.begin(), g.end());

  for (int i = 1; i <= v; i++)
    parent[i] = i;

  for (int i = 0; i < e; i++)
  {
    if (merge(g[i].v1, g[i].v2))
      ans += g[i].dist;
  }

  cout << ans;

  return 0;
}