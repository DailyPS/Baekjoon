#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int bucket[1005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int s, t, b;

    cin >> s >> t >> b;

    for (int j = s; j <= t; j++)
      bucket[j] += b;
  }

  for (int i = 1; i <= 1000; i++)
    ans = max(ans, bucket[i]);

  cout << ans;

  return 0;
}