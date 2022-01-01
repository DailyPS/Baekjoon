#include <bits/stdc++.h>

using namespace std;

int h, w, m, n;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> h >> w >> n >> m;

  int row_cnt = 1;
  int col_cnt = 1;

  h -= 1;
  w -= 1;

  row_cnt += h / (n + 1);
  col_cnt += w / (m + 1);

  cout << row_cnt * col_cnt;

  return 0;
}