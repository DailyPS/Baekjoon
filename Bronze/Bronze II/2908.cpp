#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string a, b;

    cin >> a >> b;

    for (int i = 2; i >= 0; i--)
    {
        if (a[i] > b[i])
        {
            for (int j = 2; j >= 0; j--)
                cout << a[j];

            break;
        }

        else if (a[i] < b[i])
        {
            for (int j = 2; j >= 0; j--)
                cout << b[j];

            break;
        }
    }

    return 0;
}