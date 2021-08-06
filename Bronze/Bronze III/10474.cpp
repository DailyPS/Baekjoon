#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    while(true)
    {
        long long a, b;

        cin >> a >> b;

        if (a == 0)
            break;

        cout << a / b << " " << a % b << " / " << b << "\n"; 
    }

    return 0;
}