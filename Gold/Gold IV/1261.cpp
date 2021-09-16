#include <bits/stdc++.h>

using namespace std;

int m, n;
int maze[105][105] = { 0 };
bool visited[105][105] = { 0 };

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1};

deque<tuple<int, int, int>> way;

int bfs(void)
{
  while(!way.empty())
  {
    int x = get<0>(way.front());
    int y = get<1>(way.front());
    int cost = get<2>(way.front());

    way.pop_front();

    if (x == m && y == n)
      return cost;

    for (int i = 0; i < 4; i++)
    {
      int fx = x + dx[i];
      int fy = y + dy[i];

      if (fx <= 0 || fx > m || fy <= 0 || fy > n)
        continue;
      
      if (maze[fy][fx] == 0 && !visited[fy][fx])
      {
        way.push_front(make_tuple(fx, fy, cost));
        visited[fy][fx] = true;
      }  

      else if (maze[fy][fx] == 1 && !visited[fy][fx])
      {
        way.push_back(make_tuple(fx, fy, cost + 1));
        visited[fy][fx] = true;
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n;
  cin.ignore();

  string s[105];

  for (int i = 0; i < n; i++)
    getline(cin, s[i]);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      maze[i][j] = s[i - 1][j - 1] - '0';
  }

  way.push_back(make_tuple(1, 1, 0));
  visited[1][1] = true;
  cout << bfs();

  return 0;
}