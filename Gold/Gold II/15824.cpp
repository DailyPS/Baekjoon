#include <bits/stdc++.h>

using namespace std;

long long int n, ans = 0;
long long int mod = 1000000007LL;

vector<long long int> scoville;

long long int get_two_pw(long long int a, long long int b)
{
  long long int ret = 1;

  while(b)
  {
    if (b % 2)
      ret = ret * a % mod;

    a = a * a % mod;
    b /= 2;
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    long long int sc;

    cin >> sc;

    scoville.push_back(sc);
  }

  sort(scoville.begin(), scoville.end());

  for (int i = 0; i < n; i++)
  {
    long long int max_set = get_two_pw(2, i);
    long long int min_set = get_two_pw(2, n - i - 1);

    ans += (scoville[i] % mod) * max_set % mod;
    ans -= (scoville[i] % mod) * min_set % mod;

    ans = (((ans % mod) + mod) % mod);
  }

  cout << ans;

  return 0;
}