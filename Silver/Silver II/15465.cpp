#include <bits/stdc++.h>

using namespace std;

int n, ans = 0, cur = 0;
int milk[3] = { 7, 7, 7 };

vector<tuple<int, string, string>> v;

int get_display()
{
  if (milk[0] > milk[1] && milk[0] > milk[2])
    return 1;

  else if (milk[1] > milk[0] && milk[1] > milk[2])
    return 2;
  
  else if (milk[2] > milk[1] && milk[2] > milk[0])
    return 3;

  else if (milk[1] == milk[0] && milk[0] > milk[2])
    return 4;

  else if (milk[0] == milk[2] && milk[0] > milk[1])
    return 5;

  else if (milk[1] == milk[2] && milk[1] > milk[0])
    return 6;

  else if (milk[0] == milk[1] && milk[1] == milk[2])
    return 7;

  else
    return 0;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int day;
    string cow, change;

    cin >> day >> cow >> change;

    v.push_back(make_tuple(day, cow, change));
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++)
  {
    string cow = get<1>(v[i]);
    string change = get<2>(v[i]);
    int idx, num;

    if (cow[0] == 'B')
      idx = 0;

    else if (cow[0] == 'E')
      idx = 1;

    else
      idx = 2;

    if (change[0] == '+')
    {
      num = stoi(change);
      milk[idx] += num;
    }

    else
    {
      num = stoi(change);
      milk[idx] += num;
    }

    int nxt = get_display();

    if (cur != nxt)
    {
      ans++;
      cur = nxt;
    }
  }

  cout << ans;

  return 0;
}