#include <bits/stdc++.h>

using namespace std;

int num;
long long int sx, sy;

bool e = true, w = true, s = true, n = true;

vector<pair<long long int, long long int>> police;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> num;

  for (int i = 0; i < num; i++)
  {
    long long int x, y;
    
    cin >> x >> y;

    police.push_back(make_pair(x, y));
  }

  cin >> sx >> sy;

  for (int i = 0; i < num; i++)
  {
    long long int px = police[i].first;
    long long int py = police[i].second;

    long long int diff_x = sx - px;
    long long int diff_y = sy - py;

    if (diff_x >= abs(diff_y))
      w = false;

    if (-diff_x >= abs(diff_y))
      e = false;

    if (diff_y >= abs(diff_x))
      s = false;

    if (-diff_y >= abs(diff_x))
      n = false;
  }

  if (w || e || s || n)
    cout << "YES";

  else
    cout << "NO";

  return 0;
}