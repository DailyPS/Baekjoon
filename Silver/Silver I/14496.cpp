#include <bits/stdc++.h>

using namespace std;

int a, b;
int n, m;
vector<int> g[1005];
bool visited[1005];

int bfs()
{
  queue<pair<int, int>> q;
  q.push(make_pair(a, 0));
  visited[a] = true;

  while (!q.empty())
  {
    int now = q.front().first;
    int cnt = q.front().second;
    q.pop();

    if (now == b)
      return cnt;

    for (auto &nxt : g[now])
    {
      if (!visited[nxt])
      {
        q.push(make_pair(nxt, cnt + 1));
        visited[nxt] = true;
      }
    }
  }

  return -1;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int v1, v2;
    cin >> v1 >> v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  if (a == b)
  {
    cout << "0";
    return 0;
  }

  cout << bfs();

  return 0;
}