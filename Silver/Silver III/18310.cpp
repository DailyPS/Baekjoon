#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> antena;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a;

    cin >> a;

    antena.push_back(a);
  }

  sort(antena.begin(), antena.end());

  if (n % 2)
    cout << antena[n / 2];

  else
    cout << antena[(n / 2) - 1];

  return 0;
}