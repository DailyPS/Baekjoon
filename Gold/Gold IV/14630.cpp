#include <bits/stdc++.h>

using namespace std;

int n;
int cur, goal;

vector<string> forms;
int cost[1005] = { 0 };

int get_cost(string& a, string& b)
{
  int len = a.length();
  int ret = 0;

  for (int i = 0; i < len; i++)
    ret += (a[i] - b[i]) * (a[i] - b[i]);

  return ret;
}

void dijkstra(int start)
{
  priority_queue<pair<string, int>> pq;

  pq.push(make_pair(forms[start - 1], 0));
  cost[start - 1] = 0;

  while(!pq.empty())
  {
    int cur_cost = -pq.top().second;
    string cur_form = pq.top().first;

    pq.pop();

    for (int i = 0; i < n; i++)
    {
      int nxt_cost = cur_cost + get_cost(cur_form, forms[i]);

      if (nxt_cost < cost[i])
      {
        cost[i] = nxt_cost;
        pq.push(make_pair(forms[i], -nxt_cost));
      }
    }
  }
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s;

    cin >> s;

    forms.push_back(s);
    cost[i] = INT_MAX;
  }

  cin >> cur >> goal;

  dijkstra(cur);

  cout << cost[goal - 1];

  return 0;
}