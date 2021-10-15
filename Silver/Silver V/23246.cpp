#include <bits/stdc++.h>

using namespace std;

int n;
vector<tuple<int, int, int>> v;

bool compare (tuple<int, int, int> a, tuple<int, int, int> b)
{
  if (get<0>(a) == get<0>(b))
  {
    if (get<1>(a) == get<1>(b))
    {
      return get<2>(a) < get<2>(b);
    }

    return get<1>(a) < get<1>(b);
  }

  return get<0>(a) < get<0>(b);
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++){
    int bn, a, b, c;
    cin >> bn >> a >> b >> c;
    int mulsum = a * b * c;
    int sum = a + b + c;
    v.push_back(make_tuple(mulsum, sum, bn));
  }

  sort(v.begin(), v.end(), compare);

  for (int i = 0; i < 3; i++)
    cout << get<2>(v[i]) << " ";

  return 0;
}