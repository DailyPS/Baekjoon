#include <bits/stdc++.h>

using namespace std;

bool is_prime[1000001] = { 0 };

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 2; i * i <= 1000000; i++)
  {
    if (!is_prime[i])
    {
      for (int j = i * i; j <= 1000000; j += i)
        is_prime[j] = true;
    }
  }

  while(true)
  {
    int num;
    int min_prime = 1;

    cin >> num;

    if (num == 0)
      break;

    for (int i = 2; i <= num / 2; i++)
    {
      if (!is_prime[i] && !is_prime[num - i])
      {
        min_prime = i;
        break;
      }
    }

    cout << num << " = " << min_prime << " + " << num - min_prime << "\n";
  }

  return 0;
}