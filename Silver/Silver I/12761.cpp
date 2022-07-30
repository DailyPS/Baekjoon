#include <bits/stdc++.h>

using namespace std;

int a, b, n, m;
bool visited[100005];

int bfs(void)
{
  queue<pair<int, int>> q;
  q.push(make_pair(n, 0));
  visited[n] = true;

  while (!q.empty())
  {
    int now = q.front().first;
    int mov = q.front().second;
    q.pop();
    
    if (now == m)
      return mov;

    if (now + 1 <= 100000 && !visited[now + 1])
    {
      visited[now + 1] = true;
      q.push(make_pair(now + 1, mov + 1));
    }

    if (now - 1 >= 0 && !visited[now - 1])
    {
      visited[now - 1] = true;
      q.push(make_pair(now - 1, mov + 1));
    }

    if (now + a <= 100000 && !visited[now + a])
    {
      visited[now + a] = true;
      q.push(make_pair(now + a, mov + 1));
    }

    if (now - a >= 0 && !visited[now - a])
    {
      visited[now - a] = true;
      q.push(make_pair(now - a, mov + 1));
    }

    if (now + b <= 100000 && !visited[now + b])
    {
      visited[now + b] = true;
      q.push(make_pair(now + b, mov + 1));
    }

    if (now - b >= 0 && !visited[now - b])
    {
      visited[now - b] = true;
      q.push(make_pair(now - b, mov + 1));
    }

    if (now * a <= 100000 && !visited[now * a])
    {
      visited[now * a] = true;
      q.push(make_pair(now * a, mov + 1));
    }

    if (now * b <= 100000 && !visited[now * b])
    {
      visited[now * b] = true;
      q.push(make_pair(now * b, mov + 1));
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b >> n >> m;

  cout << bfs();

  return 0;
}