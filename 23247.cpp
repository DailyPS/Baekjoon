#include <bits/stdc++.h>

using namespace std;

int m, n;
int ans = 0;
int sumdps[305][305] = { 0 };

int check_ten(int x, int y) {
  int cnt = 0;

  for (int i = x; i <= n; i++){
    int ret = sumdps[y][i] - sumdps[y][x - 1];

    if (ret > 10)
      break;
    
    else if (ret == 10) {
      cnt++;
      continue;
    }

    else {
      for (int j = y + 1; j <= m; j++) {
        ret += sumdps[j][i] - sumdps[j][x - 1];

        if (ret > 10)
          break;
        
        else if (ret == 10) {
          cnt++;
          continue;
        }
      }
    }
  }
  return cnt;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> m >> n;

  for (int i = 1; i <= m; i++) {
    int sum = 0;
    for (int j = 1; j <= n; j++) {
      int num;
      cin >> num;
      sum += num;
      sumdps[i][j] = sum;
    }
  }

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      ans += check_ten(j, i);
    }
  }

  cout << ans;

  return 0;
}