#include <bits/stdc++.h>

using namespace std;

const int MAX = 7368791;
bool flower[MAX + 5];
int n, m;

int get_dull_year()
{
  int size = min(MAX, 100 * n);

  if (m >= n)
    size = min(size, m + n + 1);

  fill_n(flower, size + 5, 0);

  int cnt = 0;

  for (int i = m; i <= size; i++)
  {
    if (!flower[i])
    {
      if (cnt == n)
        return i;

      for (int j = 2 * i; j <= size; j += i)
        flower[j] = 1;

      cnt++;
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  while(1)
  {
    cin >> m >> n;

    if (n == 0 && m == 0)
      break;

    cout << get_dull_year() << "\n";
  }

  return 0;
}