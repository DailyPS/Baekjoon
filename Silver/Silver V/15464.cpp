#include <bits/stdc++.h>

using namespace std;

int n;
int order[105];
string ID[105];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> order[i];

  for (int i = 1; i <= n; i++)
    cin >> ID[i];

  for (int i = 1; i <= n; i++)
    cout << ID[order[order[order[i]]]] << "\n";

  return 0;
}