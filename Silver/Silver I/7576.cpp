#include <bits/stdc++.h>

using namespace std;

int n, m, day = 0;
int tomato[1005][1005];

int dx[4] = { -1, 1, 0 , 0 };
int dy[4] = { 0, 0, -1, 1};

queue<pair<int, int>> ripe;

void bfs()
{
  while(!ripe.empty())
  {
    int x = ripe.front().first;
    int y = ripe.front().second;
    ripe.pop();

    for (int i = 0; i < 4; i++)
    {
      int fx = x + dx[i];
      int fy = y + dy[i];

      if (fx < 0 || fx >= n || fy < 0 || fy >= m)
        continue;

      if (!tomato[fy][fx])
      {
        tomato[fy][fx] = tomato[y][x] + 1;
        ripe.push(make_pair(fx, fy));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)   
    {
      cin >> tomato[i][j];

      if (tomato[i][j] == 1)
        ripe.push(make_pair(j, i));
    }  
  }

  bfs();

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)   
    {
      if (tomato[i][j] == 0)
      {
        cout << "-1";
        return 0;
      }

      day = max(day, tomato[i][j]);
    }  
  }

  cout << day - 1;

  return 0;
}