#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int weight;
    cin >> weight;
    v.push_back(weight);
  }

  sort(v.begin(), v.end());

  int weight_sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (weight_sum + 1 < v[i])
    {
      cout << weight_sum + 1 << "\n";
      return 0;
    }

    weight_sum += v[i];
  }

  cout << weight_sum + 1;

  return 0;
}