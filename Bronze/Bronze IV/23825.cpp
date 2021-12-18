#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  int s_cnt = n / 2;
  int m_cnt = m / 2;

  cout << min(s_cnt, m_cnt);

  return 0;
}