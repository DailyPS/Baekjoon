#include <bits/stdc++.h>

using namespace std;

int n;
long long int his[100005];
long long int ans = 0;

stack<int> s;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> his[i];

  s.push(0);

  for (int i = 1; i <= n + 1; i++)
  {
    while (!s.empty() && his[s.top()] > his[i])
    {
      int tmp = s.top();
      s.pop();
      ans = max(ans, his[tmp] * (i - s.top() - 1));
    }

    s.push(i);
  }

  cout << ans;

  return 0;
}