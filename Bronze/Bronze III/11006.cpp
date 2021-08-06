#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;

    cin >> T;

    while(T)
    {
        int n, m;

        cin >> n >> m;

        int u = n % 2;
        int t = n / 2;

        while ((u + t) != m)
        {
            t--;
            u += 2;
        }

        cout << u << " " << t << "\n";

        T--;
    }
    return 0;
}