#include <bits/stdc++.h>

using namespace std;

int n, m;
int ladder_and_snake[105];
int cnt[105];

queue<int> q;

void bfs(int start)
{
  q.push(start);

  while (!q.empty())
  {
    int now = q.front();
    q.pop();

    for (int i = 6; i > 0; i--)
    {
      int nxt = now + i;
      
      if (nxt > 100)
        continue;

      nxt = ladder_and_snake[nxt];

      if (cnt[nxt] == -1)
      {
        cnt[nxt] = cnt[now] + 1;
        q.push(nxt);
      }
    }
  }
  
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 1; i <= 100; i++)
  {
    ladder_and_snake[i] = i;
    cnt[i] = -1;
  }

  cin >> n >> m;

  for (int i = 0; i < n + m; i++)
  {
    int a, b;

    cin >> a >> b;

    ladder_and_snake[a] = b;
  }

  cnt[1] = 0;

  bfs(1);

  cout << cnt[100];

  return 0;
}