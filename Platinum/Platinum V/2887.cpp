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

int n, ans = 0;
int parent[100005];
vector<edge> g;
vector<tuple<int, int, int>> v;
vector<pair<int, int>> diff_x, diff_y, diff_z;

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

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int cx, cy, cz;

    cin >> cx >> cy >>  cz;

    diff_x.push_back(make_pair(cx, i));
    diff_y.push_back(make_pair(cy, i));
    diff_z.push_back(make_pair(cz, i));
  }

  sort(diff_x.begin(), diff_x.end());
  sort(diff_y.begin(), diff_y.end());
  sort(diff_z.begin(), diff_z.end());

  for (int i = 0; i < n - 1; i++)
  {
    g.push_back({ diff_x[i].second, diff_x[i + 1].second, diff_x[i + 1].first - diff_x[i].first });
    g.push_back({ diff_y[i].second, diff_y[i + 1].second, diff_y[i + 1].first - diff_y[i].first });
    g.push_back({ diff_z[i].second, diff_z[i + 1].second, diff_z[i + 1].first - diff_z[i].first });
  }

  sort(g.begin(), g.end());

  for (int i = 0; i <= n; i++)
    parent[i] = i;

  for (int i = 0; i < g.size(); i++)
  {
    if (merge(g[i].v1, g[i].v2))
      ans += g[i].dist;
  }

  cout << ans;

  return 0;
}