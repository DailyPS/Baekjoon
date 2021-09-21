#include <bits/stdc++.h>

using namespace std;

int n, m;
int mx, my;
int ans = 0;

vector<int> dotx;
vector<int> doty;

void get_median()
{
  sort(dotx.begin(), dotx.end());
  sort(doty.begin(), doty.end());

  mx = dotx[m / 2];
  my = doty[m / 2];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
      int x, y;

      cin >> x >> y;

      dotx.push_back(x);
      doty.push_back(y);
    }

    get_median();

    for (int i = 0; i < m; i++)
    {
      ans += abs(mx - dotx[i]);
      ans += abs(my - doty[i]);
    }

    cout << ans;

    return 0;
}