#include <bits/stdc++.h>

using namespace std;

long long int n, p;
long long int mod = 1000000;
long long int fibo[2000005] = {0, 1};

long long int pisano_period()
{
  int cnt = 0;
  int a = 0, b = 1, c = 2;

  while(true)
  {
    fibo[c] = (fibo[a] + fibo[b]) % mod;
    a++; b++; c++; cnt++;

    if (fibo[a] == 0 && fibo[b] == 1)
      return cnt;
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  p = pisano_period();

  cout << fibo[n % p];

  return 0;
}