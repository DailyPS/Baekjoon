#include <bits/stdc++.h>

using namespace std;

string s = "9780921418";
int sum = 0;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 10; i++)
  {
    if (i % 2)
      sum += (s[i] - '0') * 3;

    else
      sum += s[i] - '0';
  }

  for (int i = 0; i < 3; i++)
  {
    int num;
    cin >> num;

    if (i % 2)
      sum += num * 3;

    else
      sum += num;
  }

  cout << "The 1-3-sum is " << sum << "\n";

  return 0;
}