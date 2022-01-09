#include <bits/stdc++.h>

using namespace std;

int n, m, p;
vector<int> g[100005];
bool visited[100005];

int bfs()
{
  queue<int> q;
  q.push(p);
  visited[p] = true;

  int ret = 0;

  while (!q.empty())
  {
    int now = q.front();
    q.pop();

    if (g[now].size() == 0)
      return ret;

    if (visited[g[now][0]])
      break;

    q.push(g[now][0]);
    visited[g[now][0]] = true;
    ret++;
  }

  return -1;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> p;

  for (int i = 0; i < n; i++)
  {
    int ai, bi;
    cin >> ai >> bi;
    g[bi].push_back(ai);
  }

  cout << bfs();

  return 0;
}