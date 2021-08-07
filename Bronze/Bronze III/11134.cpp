#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        int n, c;

        cin >> n >> c;

        cout << (n % c ? n / c + 1 : n / c) << "\n";

        t--;
    }
    return 0;
}