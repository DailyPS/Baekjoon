#include <bits/stdc++.h>

using namespace std;

int arr[10][10];
int max_num = -1;
int ans_x, ans_y;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cin >> arr[i][j];

      if (arr[i][j] > max_num)
      {
        max_num = arr[i][j];
        ans_x = j;
        ans_y = i;
      }
    }
  }

  cout << max_num << "\n" << ans_y + 1 << " " << ans_x + 1;

  return 0;
}