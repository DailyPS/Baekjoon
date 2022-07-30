#include <bits/stdc++.h>

using namespace std;

long long int a, b, ans = 0;
map<long long int, bool> visited;

int bfs()
{
  queue<pair<long long int, int>> q;
  q.push(make_pair(a, 0));
  visited[a] = true;

  while (!q.empty())
  {
    long long int now = q.front().first;
    int cnt = q.front().second;
    q.pop();

    if (now == b)
      return cnt + 1;

    long long int n1 = 2 * now;
    long long int n2 = now * 10 + 1;

    if (n1 <= b && !visited[n1])
    {
      visited[n1] = true;
      q.push(make_pair(n1, cnt + 1));
    }

    if (n2 <= b && !visited[n2])
    {
      visited[n2] = true;
      q.push(make_pair(n2, cnt + 1));
    }
  }

  return -1;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  cout << bfs();

  return 0;
}