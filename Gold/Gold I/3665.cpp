#include <bits/stdc++.h>

using namespace std;

int t;
int n, m, a, b;
int order[505], level[505], g[505][505];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    memset(g, 0, sizeof(g));
    memset(level, 0, sizeof(level));

    cin >> n;

    for (int i = 1; i <= n; i++)
      cin >> order[i];

    for (int i = 1; i <= n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        g[order[i]][order[j]] = 1;
        level[order[j]]++;
      }
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
      cin >> a >> b;

      if (g[a][b])
      {
        g[a][b] = 0;
        g[b][a] = 1;
        level[a]++;
        level[b]--;
      }

      else
      {
        g[a][b] = 1;
        g[b][a] = 0;
        level[a]--;
        level[b]++;
      }
    }

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
      if (!level[i])
        q.push(i);
    }

    bool flag = false;
    vector<int> v;

    while(!q.empty())
    {
      if (q.size() > 1)
      {
        flag = true;
        break;
      }

      int cur = q.front();
      q.pop();
      v.push_back(cur);

      for (int i = 1; i <= n; i++)
      {
        if (g[cur][i])
        {
          level[i]--;

          if (!level[i])
            q.push(i);
        }
      }
    }

    int sz = v.size();

    if (flag)
      cout << "?\n";

    else if (sz != n)
      cout << "IMPOSSIBLE\n";

    else
    {
      for (int i = 0; i < sz; i++)
        cout << v[i] << " ";

      cout << "\n";
    }
  }
  return 0;
}