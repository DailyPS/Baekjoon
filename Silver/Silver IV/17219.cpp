#include <bits/stdc++.h>

using namespace std;

int n, m;

map<string, string> password;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    string page;
    string pw;

    cin >> page >> pw;

    password.insert(pair<string, string>(page, pw));
  }

  for (int i = 0; i < m; i++)
  {
    string find_pw;

    cin >> find_pw;

    cout << password[find_pw] << "\n";
  }

  return 0;
}