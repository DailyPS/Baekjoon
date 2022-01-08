#include <bits/stdc++.h>

using namespace std;

int t;

long long get_triangle_sum(int n)
{
  long long sum = 0;

  for (int i = 1; i <= n; i++)
    sum += i * ((i + 1) * (i + 2) / 2);

  return sum;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;

    cin >> n;

    cout << get_triangle_sum(n) << "\n";
  }

  return 0;
}