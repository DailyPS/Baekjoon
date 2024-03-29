#include <bits/stdc++.h>

using namespace std;

int n, m, num;
int arr[1025][1025];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> num;
      arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + num;
    }
  }

  for (int i = 0; i < m; i++)
  {
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << arr[x2][y2] - arr[x2][y1 - 1] - arr[x1 - 1][y2] + arr[x1 - 1][y1 - 1] << "\n";
  }

  return 0;
}