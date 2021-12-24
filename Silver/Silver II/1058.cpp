#include <bits/stdc++.h>

using namespace std;

string friend_map[55];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int n;
  int max_2_friend = 0;

  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++)
    getline(cin, friend_map[i]);

  for (int i = 0; i < n; i++)
  {
    int tmp = 0;

    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;

      if (friend_map[i][j] == 'Y')
        tmp++;

      else
      {
        for (int k = 0; k < n; k++)
        {
          if (k == j || k == i)
            continue;

          if (friend_map[i][k] == 'Y' && friend_map[j][k] == 'Y')
          {
            tmp++;
            break;
          }
        }
      }
    }

    max_2_friend = max(max_2_friend, tmp);
  }

  cout << max_2_friend;

  return 0;
}