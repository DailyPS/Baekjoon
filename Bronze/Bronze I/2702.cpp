#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    if (a % b == 0)
        return b;

    else
        return gcd(b, a % b);
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        int a, b;
        int ans;

        cin >> a >> b;

        if (a >= b)
            ans = gcd(a, b);

        else
            ans = gcd(b, a);

        cout << a * b / ans << " " << ans << "\n";

        t--;
    }
    return 0;
}