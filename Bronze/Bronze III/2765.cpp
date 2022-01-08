#include <bits/stdc++.h>

using namespace std;

const double PI = 3.1415927;
const int inch2mile = 63360;
const int sec2hour = 3600;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 1;; i++)
  {
    double d, h;
    int r;

    cin >> d >> r >> h;

    if (r == 0)
      break;

    double dist = d / inch2mile * PI * r;
    double mph = dist / (h / sec2hour);

    cout << fixed << setprecision(2);
    cout << "Trip #" << i << ": " << dist << " " << mph << "\n";
  }

  return 0;
}