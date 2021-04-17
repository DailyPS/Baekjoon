#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string str;

        getline(cin, str);

        if (str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;

        cout << str << '\n';
    }

    return 0;
}