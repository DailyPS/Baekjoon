#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    cout << n * (n - 1) * (n - 2) * (n - 3) / 24;

    return 0;
}