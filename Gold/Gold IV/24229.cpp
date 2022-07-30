#include <bits/stdc++.h>

using namespace std;

int n, ans;
const int INF =  1e9;
pair<int, int> broad[200005];
vector<pair<int, int>> v;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> broad[i].first >> broad[i].second;

  sort(broad, broad + n);

  v.push_back(broad[0]);

  for (int i = 1; i < n; i++)
  {
    if (v.back().second >= broad[i].first)
      v.back().second = max(v.back().second, broad[i].second);

    else
      v.push_back(broad[i]);
  }

  int sz = v.size();

  for (int i = 0; i < sz && i <= ans; i++)
  {
    int max_jump = 2 * v[i].second - v[i].first;
    auto jump_over = upper_bound(v.begin(), v.end(), make_pair(max_jump, INF));
    ans = max(ans, (int)((jump_over - 1) - v.begin()));
  }

  cout << v[ans].second;

  return 0;
}