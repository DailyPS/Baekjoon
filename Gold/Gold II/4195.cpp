#include <bits/stdc++.h>

using namespace std;

int t;
int v, e, ans = 0;
int parent[200005];
int node_size[200005];

int find(int x) {
  if (x == parent[x])
    return x;

  return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
  x = find(x);
  y = find(y);

  if (x != y)
  {
    if (node_size[x] < node_size[y])
      swap(x, y);

    node_size[x] += node_size[y];
    parent[y] = x;
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  string s1, s2;

  while(t--)
  {
    int n;

    cin >> n;

    for (int i = 1; i <= 200005; i++)
    { // Initialize for Union-Find
      node_size[i] = 1;
      parent[i] = i;
    }

    map<string, int> coop;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
      cin >> s1 >> s2;

      if (!coop.count(s1))
        coop[s1] = num++;
      
      if (!coop.count(s2))
        coop[s2] = num++;

      merge(coop[s1], coop[s2]);

      int p1 = find(coop[s1]);
      int p2 = find(coop[s2]);

      cout << max(node_size[p1], node_size[p2]) << "\n";
    }
  }

  return 0;
}