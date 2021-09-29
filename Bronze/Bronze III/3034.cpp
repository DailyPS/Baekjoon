#include <bits/stdc++.h>

using namespace std;

int n, w, h;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> n >> w >> h;

  int box_diagonal = (int) sqrt(w * w + h * h);

  for (int i = 0; i < n; i++)
  {
    int l;

    cin >> l;

    if (l <= box_diagonal)
      cout << "DA\n";

    else
      cout << "NE\n";
  }

  return 0;
}