#include <bits/stdc++.h>

using namespace std;

struct compare {
  bool operator()(const pair<int, int> &a, const pair<int, int> &b)
  {
    if (a.first == b.first)
      return a.second > b.second;

    return a.first > b.first;
  }
};

int n, ans = 0;
priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
priority_queue<int, vector<int>, greater<int>> epq;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int si, ti;

    cin >> si >> ti;

    pq.push(make_pair(si, ti));
  }

  while(!pq.empty())
  {
    int ns = pq.top().first;
    int nt = pq.top().second;
    pq.pop();

    if (epq.empty())
      epq.push(nt);

    else
    {
      if (epq.top() <= ns) {
        epq.pop();
        epq.push(nt);
      }

      else
        epq.push(nt);
    }
  }

  cout << epq.size();

  return 0;
}