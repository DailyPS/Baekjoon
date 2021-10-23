#include <bits/stdc++.h>

using namespace std;

int n, min_diff = INT_MAX;
int S[25][25];

vector<int> m, o;

void backtracking(int num)
{
  if (num == n)
  {
    if (m.size() == n / 2)
    {
      int m_sum = 0;
      int o_sum = 0;

      for (int i = 0; i < n / 2; i++)
      {
        for (int j = i + 1; j < n / 2; j++)
        {
          m_sum += S[m[i]][m[j]] + S[m[j]][m[i]];
          o_sum += S[o[i]][o[j]] + S[o[j]][o[i]];
        }
      }

      min_diff = min(min_diff, abs(m_sum - o_sum));
    }
    return;
  }

  m.push_back(num);
  backtracking(num + 1);
  m.pop_back();

  o.push_back(num);
  backtracking(num + 1);
  o.pop_back();
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> S[i][j];
  }

  backtracking(0);

  cout << min_diff;

  return 0;
}