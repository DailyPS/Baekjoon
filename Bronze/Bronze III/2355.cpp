#include <bits/stdc++.h>

using namespace std;

long long int a, b;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> a >> b;

  if (b < a)
    swap(a, b);

  if (a >= 0LL && b >= 0LL)
  {
    long long int b_sum = b * (b + 1) / 2;
    long long int a_sum = a * (a - 1) / 2;

    cout << b_sum - a_sum;
  }

  else if (a <= 0LL && b <= 0LL)
  {
    long long int a_sum = (-a) * ((-a) + 1) / 2;
    long long int b_sum = (-b) * ((-b) - 1) / 2;

    cout << (-1LL) * (a_sum - b_sum);
  }

  else
  {
    if ((-a) < b)
    {
      long long int b_sum = b * (b + 1) / 2;
      long long int a_sum = (-a) * ((-a) + 1) / 2;

      cout << b_sum - a_sum;
    }

    else if ((-a) > b)
    {
      long long int a_sum = (-a) * ((-a) + 1) / 2;
      long long int b_sum = b * (b + 1) / 2;

      cout << (-1LL) * (a_sum - b_sum);
    }

    else
      cout << "0";
  }

  return 0;
}