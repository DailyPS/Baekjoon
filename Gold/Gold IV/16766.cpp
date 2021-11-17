#include <bits/stdc++.h>

using namespace std;

int n, m, c;
int arrive_time[100005];
int l = 0, h = 1000000000;

bool can_ride (int mid)
{
  int bus = 1;
  int bus_first_ride = 0;

  for (int i = 1; i < n; i++)
  {
    if (i - bus_first_ride < c && arrive_time[i] <= arrive_time[bus_first_ride] + mid)
      continue;

    bus++;
    bus_first_ride = i;
  }

  return bus <= m;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m >> c;

  for (int i = 0; i < n; i++)
    cin >> arrive_time[i];

  sort(arrive_time, arrive_time + n);

  while (l <= h)
  {
    int mid = (l + h) / 2;

    if (can_ride(mid))
      h = mid - 1;

    else
      l = mid + 1;
  }

  cout << l;

  return 0;
}