#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];

        if ((i + 1) % 10 == 0)
            cout << "\n";
    }

    return 0;
}