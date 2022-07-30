#include <bits/stdc++.h>

using namespace std;

int c;
bool visited[1005];

int bfs(int s, int t)
{
  queue<tuple<int, int, int>> q;
  q.push(make_tuple(s, t, 0));
  visited[s] = true;

  while (!q.empty())
  {
    int ns = get<0>(q.front());
    int nt = get<1>(q.front());
    int cnt = get<2>(q.front());
    q.pop();

    if (ns == nt)
      return cnt;

    if (ns * 2 <= nt + 3 && !visited[ns * 3])
      q.push(make_tuple(ns * 2, nt + 3, cnt + 1));

    if (ns + 1 <= nt && !visited[ns + 1])
      q.push(make_tuple(ns + 1, nt, cnt + 1));
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> c;

  for (int i = 0; i < c; i++)
  {
    int s, t;

    cin >> s >> t;

    cout << bfs(s, t) << "\n";

    memset(visited, 0, sizeof(visited));
  }

  return 0;
}