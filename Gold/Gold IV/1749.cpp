#include <bits/stdc++.h>

using namespace std;

int n, m, ans = INT_MIN;
int prefix_sum[205][205];
int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    int sum = 0;
    int num;

    for (int j = 1; j <= m; j++)
    {
      cin >> num;
      sum += num;
      prefix_sum[i][j] = sum;
    }
  }

  for (int i = 1; i <= m; i++)
  {
    for (int j = 0; j < i; j++)
    {
      for (int k = 1; k <= n; k++)
      {
        int sum = prefix_sum[k][i] - prefix_sum[k][j];

        for (int l = k + 1; l <= n; l++)
        {
          ans = max(ans, sum);
          sum += prefix_sum[l][i] - prefix_sum[l][j];
        }

        ans = max(ans, sum);
      }
    }
  }

  cout << ans;

  return 0;
}