#include <bits/stdc++.h>

using namespace std;

int n, m;
int level[32005];
bool visited[32005];

vector<int> g[32005];
queue<int> q;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int a, b;

    cin >> a >> b;

    g[a].push_back(b);
    level[b]++;
  }
  
  for (int i = 1; i <= n; i++)
  {
    if (!level[i])
    {
      q.push(i);
      visited[i] = true;
    }
  }

  while(!q.empty())
  {
    int cur = q.front();
    cout << cur << " ";
    q.pop();

    for (auto& i : g[cur])
    {
      level[i]--;

      if (!level[i])
      {
        q.push(i);
        visited[i] = true;
      }
    }
  }

  return 0;
}