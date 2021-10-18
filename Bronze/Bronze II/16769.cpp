#include <bits/stdc++.h>

using namespace std;

int capacity[3];
int milk[3];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 3; i++)
    cin >> capacity[i] >> milk[i];

  for (int i = 0; i < 100; i++)
  {
    if (milk[i % 3] + milk[(i + 1) % 3] <= capacity[(i + 1) % 3])
    {
      milk[(i + 1) % 3] += milk[i % 3];
      milk[i % 3] = 0;
    }

    else
    {
      int diff = capacity[(i + 1) % 3] - milk[(i + 1) % 3];
      milk[(i + 1) % 3] = capacity[(i + 1) % 3];
      milk[i % 3] -= diff;
    }
  }

  for (int i = 0; i < 3; i++)
    cout << milk[i] << "\n";

  return 0;
}