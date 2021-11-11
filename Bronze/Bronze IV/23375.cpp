#include <bits/stdc++.h>

using namespace std;

int x, y;
int r;

int dx[4] = { 1, 1, -1, -1 };
int dy[4] = { -1, 1, 1, -1 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> x >> y >> r;

  for (int i = 0; i < 4; i++)
    cout << x + (dx[i] * r) << " " << y + (dy[i] * r) << "\n";

  return 0;
}