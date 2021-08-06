#include <bits/stdc++.h>

using namespace std;

long long gcd (long long a, long long b)
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
        long long a, b;

        cin >> a >> b;

        if (a >= b)
            cout << a * b / gcd(a, b) << "\n";

        else
            cout << a * b / gcd(b, a) << "\n";
        
        t--;
    }
    return 0;
}