#include <bits/stdc++.h>

using namespace std;

int v, e;
int infected = 0;
bool visited[105] = { 0 };

vector<int> pc[105];

void dfs(int n)
{
  visited[n] = true;
  infected++;

  for (auto& i : pc[n])
  {
    if (!visited[i])
      dfs(i);
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> v >> e;

  for (int i = 0; i < e; i++)
  {
    int v1, v2;

    cin >> v1 >> v2;

    pc[v1].push_back(v2);
    pc[v2].push_back(v1);
  }

  dfs(1);

  cout << infected - 1;

  return 0;
}