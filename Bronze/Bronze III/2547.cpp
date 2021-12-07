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
    long long int student_num;
    long long int sum = 0;
    
    cin >> student_num;
    
    for (int i = 0; i < student_num; i++)
    {
      long long int c;
      cin >> c;
      sum += c;
      sum %= student_num;
    }
    
    if (sum % student_num)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}