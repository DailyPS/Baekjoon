#include <bits/stdc++.h>

using namespace std;

int k;
string p;
bool is_prime[1000005] = { 0 };

bool check_good(int num)
{
  int sum = 0;
  int len = p.length();

  for (int i = 0; i < len; i++)
    sum = (sum * 10 + (p[i] - '0')) % num;

  if (!sum)
    return true;

  else
    return false;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> p >> k;

  for (int i = 2; i < k; i++)
  {
    if (is_prime[i])
      continue;

    if (check_good(i))
    {
      cout << "BAD " << i << "\n";
      return 0;
    } 

    for (int j = 2 * i; j < k; j += i)
      is_prime[j] = true;
  }

  cout << "GOOD\n";

  return 0;
}