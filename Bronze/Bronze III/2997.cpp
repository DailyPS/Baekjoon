#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 3; i++)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }

  sort(v.begin(), v.end());

  if (v[1] - v[0] == v[2] - v[1])
    cout << v[2] + (v[1] - v[0]);

  else if (v[1] - v[0] > v[2] - v[1])
    cout << v[0] + (v[2] - v[1]);

  else if (v[1] - v[0] < v[2] - v[1])
    cout << v[1] + (v[1] - v[0]);

  return 0;
}