#include <bits/stdc++.h>

using namespace std;

int n;
int score[4] = { 0 };
int shell[4][4] = { {0, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a, b, g;

    cin >> a >> b >> g;

    for (int j = 1; j <= 3; j++)
    {
      int tmp = shell[j][a];
      shell[j][a] = shell[j][b];
      shell[j][b] = tmp;

      if (shell[j][g] == 1)
        score[j]++;
    }
  }

  cout << max(score[1], max(score[2], score[3]));

  return 0;
}