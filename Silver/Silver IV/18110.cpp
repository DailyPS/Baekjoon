#include <bits/stdc++.h>

using namespace std;

int n;
int score[300005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  if (n == 0)
  {
    cout << 0;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    cin >> score[i];
  }

  sort(score, score + n);

  int remove = round((double)n * 0.15);
  int sum = 0;

  for(int i = remove; i < n - remove; i++) {
    sum += score[i];
  }
  
  cout << round((double)sum / (n - 2 * remove));

  return 0;
}