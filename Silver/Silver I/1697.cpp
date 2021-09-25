#include <bits/stdc++.h>

using namespace std;

int n, k;
queue<int> hide_and_seek;
int visited[100005] = { 0 };

int bfs(void)
{
  while(!hide_and_seek.empty())
  {
    int pos = hide_and_seek.front();
    hide_and_seek.pop();

    if (pos == k)
      return visited[k] - 1;

    if (pos * 2 <= 100000 && !visited[pos * 2])
    {
      hide_and_seek.push(2 * pos);
      visited[2 * pos] = visited[pos] + 1;
    }

    if (pos + 1 <= 100000 && !visited[pos + 1])
    {
      hide_and_seek.push(pos + 1);
      visited[pos + 1] = visited[pos] + 1;
    }

    if (pos - 1 >= 0 && !visited[pos - 1])
    {
      hide_and_seek.push(pos - 1);
      visited[pos - 1] = visited[pos] + 1;
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  if (n >= k)
  {
    cout << n - k;
    return 0;
  }

  hide_and_seek.push(n);
  visited[n] = 1;
  cout << bfs();

  return 0;
}