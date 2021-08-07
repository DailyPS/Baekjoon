#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int sum = 0;

    while(true)
    {
        int n;

        cin >> n;

        if (cin.eof())
            break;

        sum += n;
    }

    cout << sum;

    return 0;
}