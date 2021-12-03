#include <bits/stdc++.h>

using namespace std;

long long int n, k, ans = 0;
vector<pair<long long int, long long int>> jewel;
long long int bag[300005];
bool filled[300005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    long long int m, v;
    cin >> m >> v;
    jewel.push_back(make_pair(m, v));
  }

  for (int i = 0; i < k; i++)
    cin >> bag[i];

  sort(jewel.begin(), jewel.end());
  sort(bag, bag + k);

  int idx = 0;
  priority_queue<long long int> pq;

  for (int i = 0; i < k; i++)
  {
    while (idx < n && jewel[idx].first <= bag[i])
      pq.push(jewel[idx++].second);

    if (!pq.empty())
    {
      ans += pq.top();
      pq.pop();
    }
  }

  cout << ans;

  return 0;
}