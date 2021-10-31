#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while(true)
  {
    long long int a;
    long long int leaf = 1;

    cin >> a;

    if (a == 0)
      break;

    for (int i = 0; i < a; i++)
    {
      long long sp, cut;

      cin >> sp >> cut;

      leaf = leaf * sp - cut;
    }

    cout << leaf << "\n";
  }

  return 0;
}