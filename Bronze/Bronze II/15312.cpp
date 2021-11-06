#include <bits/stdc++.h>

using namespace std;

string A, B;
vector<int> match;
int cnt[27] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> A >> B;

  int len_A = A.length();
  int len_B = B.length();

  int idx = 0;

  for (int i = 0; i < len_A; i++)
  {
    match.push_back(cnt[A[i] - 'A']);
    match.push_back(cnt[B[i] - 'A']);
  }

  while(true)
  {
    vector<int> tmp;

    for (int i = 0; i < match.size() - 1; i++)
      tmp.push_back((match[i] + match[i + 1]) % 10);

    match = tmp;
    
    if (match.size() == 2)
      break;
  }

  cout << match[0] << match[1];

  return 0;
}