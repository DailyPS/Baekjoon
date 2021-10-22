#include <bits/stdc++.h>

using namespace std;

int n;
int room[1005];
int min_walk = INT_MAX;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> room[i];

  for (int i = 1; i <= n; i++)
  {
    int nxt = (i == n ? 1 : i + 1);
    int cnt = 1;
    int walk_sum = 0;

    while (nxt != i)
    {
      walk_sum += room[nxt] * cnt;
      nxt = (nxt == n ? 1 : nxt + 1);
      cnt++;
    }

    min_walk = min(min_walk, walk_sum);
  }

  cout << min_walk;

  return 0;
}