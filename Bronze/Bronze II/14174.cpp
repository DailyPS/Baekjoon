#include <bits/stdc++.h>

using namespace std;

int n;
int alphabet_cnt[27];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s1, s2;
    int s1_cnt[27] = { 0 };
    int s2_cnt[27] = { 0 };

    cin >> s1 >> s2;

    int len_s1 = s1.length();
    int len_s2 = s2.length();

    for (int j = 0; j < len_s1; j++)
      s1_cnt[s1[j] - 'a']++;
    
    for (int j = 0; j < len_s2; j++)
      s2_cnt[s2[j] - 'a']++;

    for (int j = 0; j < 26; j++)
      alphabet_cnt[j] += max(s1_cnt[j], s2_cnt[j]);
  }

  for (int i = 0; i < 26; i++)
    cout << alphabet_cnt[i] << "\n";

  return 0;
}