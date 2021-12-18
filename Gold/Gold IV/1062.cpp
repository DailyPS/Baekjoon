#include <bits/stdc++.h>

using namespace std;

int n, k, bitmask;
int word[55];

int backtracking(int learn, int idx)
{
  int ret = 0;

  if (learn == k - 5)
  {
    for (int i = 0; i < n; i++)
    {
      if ((word[i] & bitmask) == word[i])
        ret++;
    }

    return ret;
  }

  for (int i = idx; i < 26; i++)
  {
    if (bitmask & (1 << i))
      continue;

    bitmask |= (1 << i);
    ret = max(ret, backtracking(learn + 1, i + 1));
    bitmask &= ~(1 << i);
  }

  return ret;
}

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    int sz = s.size();

    for (int j = 0; j < sz; j++)
      word[i] |= 1 << (s[j] - 'a');
  }

  if (k < 5)
  {
    cout << "0";
    return 0;
  }

  bitmask |= 1 << ('a' - 'a');
  bitmask |= 1 << ('c' - 'a');
  bitmask |= 1 << ('i' - 'a');
  bitmask |= 1 << ('n' - 'a');
  bitmask |= 1 << ('t' - 'a');

  cout << backtracking(0, 0);

  return 0;
}