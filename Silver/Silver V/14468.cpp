#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> alphabet(26);

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int ans = 0;
  char c;

  for (int i = 0; i < 52; i++)
  {
    cin >> c;
    
    int idx = c - 'A';

    if (alphabet[idx].first == 0)
      alphabet[idx].first = i + 1;

    else
      alphabet[idx].second = i + 1;
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (alphabet[i].first < alphabet[j].first && alphabet[j].first < alphabet[i].second && alphabet[i].second < alphabet[j].second)
        ans++;
    }
  }

  cout << ans;

  return 0;
}