#include <bits/stdc++.h>

using namespace std;

long long int n, ans = 0;
stack<pair<long long int, long long int>> s;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    long long int p;
    cin >> p;

    long long int cnt = 1;

    while (!s.empty())
    {
      if (s.top().first < p)
      {
        ans += s.top().second;
        cnt = 1;
        s.pop();
      }

      else if (s.top().first == p)
      {
        ans += s.top().second;
        cnt = s.top().second + 1;
        s.pop();
      }

      else
      {
        ans++;
        break;
      }
    }

    s.push(make_pair(p, cnt));
  }

  cout << ans;

  return 0;
}