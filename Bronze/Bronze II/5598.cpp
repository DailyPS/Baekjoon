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
        if (str[i] - 3 >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 3;

        else
            str[i] = str[i] + 23;
    }

    cout << str;

    return 0;
}