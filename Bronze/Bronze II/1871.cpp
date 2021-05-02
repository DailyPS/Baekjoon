#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str, str_back;
        int front = 0;
        int back = 0;

        cin >> str;

        for (int i = 2; i >= 0; i--)
            front += (int) pow(26, i) * (str[2 - i] - 'A');

        str_back = str.substr(4, 4);
        back = stoi(str_back);

        if (abs(front - back) <= 100)
            cout << "nice\n";

        else
            cout << "not nice\n";
    }

    return 0;
}