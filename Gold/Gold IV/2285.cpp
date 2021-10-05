#include <bits/stdc++.h>

using namespace std;

int n;
long long total = 0;

vector<pair<long long, long long>> village;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    long long pos, people;

    cin >> pos >> people;

    village.push_back(make_pair(pos, people));
    total += people;
  }

  sort(village.begin(), village.end());

  long long p_sum = 0;

  for (int i = 0; i < n; i++)
  {
    p_sum += village[i].second;

    if (p_sum * (long long) 2 >= total)
    {
      cout << village[i].first;
      return 0;
    }
  }

  return 0;
}