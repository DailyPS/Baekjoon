#include <bits/stdc++.h>

using namespace std;

string s, ans;
stack<char> op;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> s;

  int len = s.length();

  for (int i = 0; i < len; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      ans += s[i];

    else
    {
      if (s[i] == '(')
        op.push(s[i]);

      else if (s[i] == '*' || s[i] == '/')
      {
        while (!op.empty() && (op.top() == '*' || op.top() == '/'))
        {
          ans += op.top();
          op.pop();
        }

        op.push(s[i]);
      }

      else if (s[i] == '+' || s[i] == '-')
      {
        while (!op.empty() && op.top() != '(')
        {
          ans += op.top();
          op.pop();
        }

        op.push(s[i]);
      }

      else if (s[i] == ')')
      {
        while(!op.empty() && op.top() != '(')
        {
          ans += op.top();
          op.pop();
        }

        op.pop();
      }
    }
  }

  while (!op.empty())
  {
    ans += op.top();
    op.pop();
  }

  cout << ans;

  return 0;
}