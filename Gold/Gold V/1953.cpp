#include <bits/stdc++.h>

using namespace std;

int n;
bool hate[105][105];
int visited[105] = { 0 };

vector<int> blue, white;
queue<int> q;

void bfs()
{
  for (int i = 1; i <= n; i++)
  {
    if (visited[i])
      continue;

    q.push(i);
    visited[i] = 1;

    while (!q.empty())
    {
      int cur = q.front();
      q.pop();

      for (int j = 1; j <= n; j++)
      {
        if (visited[j])
          continue;

        if (hate[cur][j])
        {
          visited[j] = visited[cur] * (-1);
          q.push(j);
        }
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int cnt;
    cin >> cnt;

    for (int j = 0; j < cnt; j++)
    {
      int p;
      cin >> p;

      hate[i][p] = true;
      hate[p][i] = true;
    }
  }

  bfs();

  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == 1)
      blue.push_back(i);

    else
      white.push_back(i);
  }

  int sz_blue = blue.size();
  int sz_white = white.size();

  if (sz_white == 0)
  {
    white.push_back(blue.back());
    blue.pop_back();
    sz_blue--;
    sz_white++;
  }

  cout << sz_blue << "\n";

  for (int i = 0; i < sz_blue; i++)
    cout << blue[i] << " ";

  cout << "\n";

  cout << sz_white << "\n";

  for (int i = 0; i < sz_white; i++)
    cout << white[i] << " ";

  return 0;
}