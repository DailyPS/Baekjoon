#include <bits/stdc++.h>

using namespace std;

int n;
int A[4005], B[4005], C[4005], D[4005];
long long int ans = 0;

vector<int> x, y;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> A[i] >> B[i] >> C[i] >> D[i];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      x.push_back(A[i] + B[j]);
      y.push_back(C[i] + D[j]);
    }
  }

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  for (int i = 0; i < n * n; i++)
    ans += upper_bound(y.begin(), y.end(), -x[i]) - lower_bound(y.begin(), y.end(), -x[i]);

  cout << ans;

  return 0;
}