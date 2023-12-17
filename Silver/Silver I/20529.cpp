#include <bits/stdc++.h>

using namespace std;

int t;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> t;

  while(t--)
  {
    int n;
    int ans = INT_MAX;
    string mbti[100005];
    
    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> mbti[i];

    if (n >= 33)
      cout << 0 << "\n";

    else {
      for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
          for (int k = j + 1; k < n; k++) {
            int cnt = 0;

            for (int l = 0; l < 4; l ++) {
              cnt += mbti[i][l] != mbti[j][l] ? 1 : 0;
              cnt += mbti[j][l] != mbti[k][l] ? 1 : 0;
              cnt += mbti[k][l] != mbti[i][l] ? 1 : 0;
            }

            ans = min(ans, cnt);
          }
        }
      }

      cout << ans << "\n";
    }
  }

  return 0;
}