#include <bits/stdc++.h>

using namespace std;

struct rect {
  int x1, y1, x2, y2;

  rect(int a, int b, int c, int d) {
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
  }
};

int n;
int parent[1005];
vector<rect> v;
vector<int> ans;

int find(int x) {
  if (x == parent[x])
    return x;

  return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
  x = find(x);
  y = find(y);
  parent[x] = y;
}

bool connected(rect a, rect b)
{
  if (a.x2 < b.x1 || a.x1 > b.x2 || a.y2 < b.y1 || a.y1 > b.y2)
    return false;

  if (a.x1 < b.x1 && a.x2 > b.x2 && a.y1 < b.y1 && a.y2 > b.y2)
    return false;

  if (a.x1 > b.x1 && a.x2 < b.x2 && a.y1 > b.y1 && a.y2 < b.y2)
    return false;

  return true;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  // virtual rectangle distincts that a rectange is connected with (0, 0)
  v.push_back(rect(0, 0, 0, 0));

  for (int i = 0; i < n; i++)
  {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    v.push_back(rect(x1, y1, x2, y2));
  }

  for (int i = 0; i <= n; i++)
    parent[i] = i;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (connected(v[i], v[j]))
        merge(i, j);
    }
  }

  for (int i = 0; i <= n; i++)
    ans.push_back(find(i));

  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  cout << ans.size() - 1;

  return 0;
}