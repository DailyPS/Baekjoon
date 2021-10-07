#include <bits/stdc++.h>

using namespace std;

int n, m, sum = 0;
int arr[100005];

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    arr[i] += arr[i - 1];
  }

  for (int i = 0; i < m; i++)
  {
    int s, e;

    cin >> s >> e;

    cout << arr[e] - arr[s - 1] << "\n";
  }

  return 0;
}