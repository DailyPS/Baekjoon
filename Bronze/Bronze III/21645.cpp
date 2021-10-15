#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m, k;

    cin >> n >> m >> k;

    if (m >= k)
        cout << n * (m / k + (k - 1));

    else
        cout << n * m;

    return 0;
}