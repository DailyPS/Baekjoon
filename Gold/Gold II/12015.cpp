#include <bits/stdc++.h>

using namespace std;

int n;
int num[1000005];
vector<int> LIS;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> num[i];

  LIS.push_back(num[0]);

  for (int i = 1; i < n; i++)
  {
    if (LIS.back() < num[i])
      LIS.push_back(num[i]);

    else
    {
      auto target = lower_bound(LIS.begin(), LIS.end(), num[i]);
      *target = num[i];
    }
  }

  cout << LIS.size();

  return 0;
}