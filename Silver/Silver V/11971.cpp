#include <bits/stdc++.h>

using namespace std;

int n, m;
int speed_limit[101];
int car_speed[101];
int ans = 0;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < 100;)
  {
    int meter, l;

    cin >> meter >> l;

    for (int j = 0; j < meter; j++)
    {
      speed_limit[i] = l;
      i++;
    }
  }

  for (int i = 0; i < 100;)
  {
    int meter, s;

    cin >> meter >> s;

    for (int j = 0; j < meter; j++)
    {
      car_speed[i] = s;
      i++;
    }
  }

  for (int i = 0; i < 100; i++)
  {
    if (speed_limit[i] < car_speed[i])
      ans = max(ans, car_speed[i] - speed_limit[i]);
  }

  cout << ans;

  return 0;
}