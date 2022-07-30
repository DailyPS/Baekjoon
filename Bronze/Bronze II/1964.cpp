#include <bits/stdc++.h>

#define MOD 45678

using namespace std;

int n;
int ans = 5;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    ans += (i + 1) + i * 2;
    ans %= MOD;
  }

  cout << ans % MOD;

  return 0;
}