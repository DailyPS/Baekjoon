#include <bits/stdc++.h>

#define MAX 100000

using namespace std;

int n, k;
bool visited[100005];
int min_time = INT_MAX, cnt = 0;

int bfs()
{
  queue<pair<int, int>> q;

  q.push(make_pair(n, 0));

  while(!q.empty())
  {
    int now_pos = q.front().first;
    int now_time = q.front().second;
    q.pop();

    visited[now_pos] = true;

    if (min_time && min_time == now_time && now_pos == k)
      cnt++;

    if (min_time == INT_MAX && now_pos == k)
    {
      min_time = now_time;
      cnt++;
    }

    if (now_pos + 1 <= MAX && !visited[now_pos + 1])
      q.push(make_pair(now_pos + 1, now_time + 1));

    if (now_pos - 1 >= 0 && !visited[now_pos - 1])
      q.push(make_pair(now_pos - 1, now_time + 1));

    if (now_pos * 2 <= MAX && !visited[now_pos * 2])
      q.push(make_pair(now_pos * 2, now_time + 1));
  }

  return min_time;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  cout << bfs() << "\n";
  cout << cnt;

  return 0;
}