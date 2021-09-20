#include <bits/stdc++.h>

using namespace std;

long long int a, b, c;

long long int fast_modular_multiply(int k, int n)
{
  if (n == 1)
    return k % c;

  if (n % 2)
    return (k % c) * fast_modular_multiply(k, n - 1);

  else
  {
    long long int half = fast_modular_multiply(k, n / 2) % c;
    return (half * half) % c;
  }
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> a >> b >> c;

  cout << fast_modular_multiply(a, b) % c;

  return 0;
}