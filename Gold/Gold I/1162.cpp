#include <bits/stdc++.h>

using namespace std;

long long int n, m, k;
long long int dp[10005][25];
long long int ans = LONG_LONG_MAX;

vector<pair<long long int, long long int>> g[10005];

void dijkstra()
{
  priority_queue<tuple<long long int, long long int, long long int>> pq; // cost, node, pave
  dp[1][0] = 0;
  pq.push(make_tuple(0, 1, 0));

  while(!pq.empty())
  {
    long long int now_cost = -get<0>(pq.top());
    long long int now_node = get<1>(pq.top());
    long long int now_pave = get<2>(pq.top());
    pq.pop();

    if (now_cost > dp[now_node][now_pave])
      continue;

    for (auto& i : g[now_node])
    {
      long long int nxt_node = i.first;
      long long int nxt_cost = i.second + now_cost;

      if (nxt_cost < dp[nxt_node][now_pave])
      {
        dp[nxt_node][now_pave] = nxt_cost;
        pq.push(make_tuple(-nxt_cost, nxt_node, now_pave));
      }

      if (now_pave < k && now_cost < dp[nxt_node][now_pave + 1])
      {
        dp[nxt_node][now_pave + 1] = now_cost;
        pq.push(make_tuple(-now_cost, nxt_node, now_pave + 1));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> k;

  for (int i = 0; i <= 10000; i++)
  {
    for (int j = 0; j <= 20; j++)
      dp[i][j] = LONG_LONG_MAX;
  }

  for (int i = 0; i < m; i++)
  {
    long long int v1, v2, c;

    cin >> v1 >> v2 >> c;

    g[v1].push_back(make_pair(v2, c));
    g[v2].push_back(make_pair(v1, c));
  }

  dijkstra();

  for (int i = 0; i <= k; i++)
    ans = min(ans, dp[n][i]);

  cout << ans;

  return 0;
}