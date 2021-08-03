#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    while(true)
    {
        int num;

        cin >> num;

        if (!num)
            break;

        if (num % n == 0)
            cout << num << " is a multiple of " << n << ".\n";

        else
            cout << num << " is NOT a multiple of " << n << ".\n";
    }

    return 0;
}