#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int sum = 0;
    int two_count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;

        sum += tmp;
        two_count += (tmp / 2);
    }

    if (sum % 3)
        cout << "NO";

    else
    {
        int quotient = sum / 3;

        if (two_count >= quotient)
            cout << "YES";

        else
            cout << "NO";
    }

    return 0;
}