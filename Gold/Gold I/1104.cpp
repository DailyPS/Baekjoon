#include <bits/stdc++.h>

using namespace std;

string s1, s2;
unsigned long long int c;

unsigned long long int s1_head_zero = 0, s1_tail_zero = 0;
unsigned long long int s2_head_zero = 0, s2_tail_zero = 0;
unsigned long long int len_s1, len_s2;

const unsigned long long int s1_repeat = 1e6;
const unsigned long long int limit = 1e16;
const unsigned long long int n_limit = 1e8;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> s1 >> s2 >> c;

  len_s1 = (unsigned long long) s1.length();
  len_s2 = (unsigned long long) s2.length();

  for (int i = 0; i < len_s1; i++)
  {
    if (s1[i] == '0')
      s1_head_zero++;

    else
      break;
  }

  for (int i = 0; i < len_s2; i++)
  {
    if (s2[i] == '0')
      s2_head_zero++;

    else
      break;
  }

  for (int i = len_s1 - 1; i >= 0; i--)
  {
    if (s1[i] == '0')
      s1_tail_zero++;

    else
      break;
  }

  for (int i = len_s2 - 1; i >= 0; i--)
  {
    if (s2[i] == '0')
      s2_tail_zero++;

    else
      break;
  }

  if (len_s1 == s1_head_zero && len_s2 == s2_head_zero)
  {
    cout << "0";
    return 0;
  }

  unsigned long long int cnt = 0;
  unsigned long long int ans = -1;

  // Case 1 : S1
  for (int i = 0; i < len_s1; i++)
  {
    cnt = (s1[i] == '0' ? cnt + 1 : 0);

    if (cnt == c)
    {
      ans = min(ans, i - c + 1);
      break;
    }
  }

  cnt = 0;

  // Case 2 : S2
  for (int i = 0; i < len_s2; i++)
  {
    cnt = (s2[i] == '0' ? cnt + 1 : 0);

    if (cnt == c)
    {
      ans = min(ans, s1_repeat * len_s1 + i - c + 1);
      break;
    }
  }

  // Case 3 : S1 + S1
  if (s1_head_zero + s1_tail_zero >= c)
    ans = min(ans, len_s1 - s1_tail_zero);

  // Case 4 : S1 + S2
  if (s1_tail_zero + s2_head_zero >= c)
    ans = min(ans, s1_repeat * len_s1 - s1_tail_zero);

  // Case 5 : S2 + S1
  if (s2_tail_zero + s1_head_zero >= c)
    ans = min(ans, s1_repeat * len_s1 + len_s2 - s2_tail_zero);

  // Case 6 : S2 + S2
  if (s2_tail_zero + s2_head_zero >= c)
    ans = min(ans, 2 * s1_repeat * len_s1 + 2 * len_s2 - s2_tail_zero);

  // Case 7 : S2 + S1 + S2
  // Case 9 : S1 * 10^6 + S2
  if (len_s1 == s1_head_zero)
  {
    if (s1_repeat * len_s1 + s2_head_zero >= c)
      ans = 0;

    if (s2_tail_zero + s1_repeat * len_s1 + s2_head_zero >= c)
      ans = min(ans, s1_repeat * len_s1 + len_s2 - s2_tail_zero);
  }

  unsigned long long int n;

  // Case 8 : S1 + S2 + S1
  // Case 10 : S1 + S2 + S1 but S1 ends with 1
  // Method
  // when S(N) ~ S(N + 1) meet the length c
  // use Ns S1 and use (N - 1) * N / 2s S2
  if (len_s2 == s2_head_zero)
  {
    n = (max(c - s1_head_zero, (unsigned long long) 0) + len_s2 - 1) / len_s2;

    if (n > 0 && n <= 2 * n_limit && n * s1_repeat * len_s1 + n * (n - 1) * len_s2 / 2 + c <= limit)
      ans = min(ans, n * s1_repeat * len_s1 + n * (n - 1) * len_s2 / 2);

    n = (max(c - s1_head_zero - s1_tail_zero, (unsigned long long) 0) + len_s2 - 1) / len_s2;

    if (n > 0 && n <= 2 * n_limit && n * s1_repeat * len_s1 + n * (n - 1) * len_s2 / 2 + c - s1_tail_zero <= limit)
      ans = min(ans, n * s1_repeat * len_s1 + n * (n - 1) * len_s2 / 2 - s1_tail_zero);
  }

  cout << (long long) ans;

  return 0;
}