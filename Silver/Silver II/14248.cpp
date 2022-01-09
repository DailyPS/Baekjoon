#include <bits/stdc++.h>

using namespace std;

int n, start_pos;
int stone[100005];
bool visited[100005];

int bfs(int start)
{
  int ret = 0;
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty())
  {
    int now = q.front();
    ret++;
    q.pop();

    int mov = stone[now];
    int nxt_pos = now + mov;
    int nxt_neg = now - mov;

    if (nxt_pos < n && !visited[nxt_pos])
    {
      q.push(nxt_pos);
      visited[nxt_pos] = true;
    }

    if (nxt_neg >= 0  && !visited[nxt_neg])
    {
      q.push(nxt_neg);
      visited[nxt_neg] = true;
    }
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> stone[i];

  cin >> start_pos;

  start_pos--;

  cout << bfs(start_pos);

  return 0;
}