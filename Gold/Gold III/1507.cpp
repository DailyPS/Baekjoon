#include <bits/stdc++.h>

using namespace std;

int n;

int road[25][25];
bool valid[25][25];
int cost_sum = 0;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> road[i][j];
      valid[i][j] = true;
    }
  }

  for (int k = 0; k < n; k++)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j || j == k || k == i)
          continue;

        if (road[i][j] == road[i][k] + road[k][j])
          valid[i][j] = false;
        
        else if (road[i][j] > road[i][k] + road[k][j])
        {
          cout << "-1";
          return 0;
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (valid[i][j])
        cost_sum += road[i][j];
    }
  }

  cout << cost_sum / 2;

  return 0;
}