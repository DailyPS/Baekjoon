#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int n, m;

    cin >> str >> m;

    n = stoi(str);

    if (str.length() * n <= m)
    {
        for (int i = 0; i < n; i++)
            cout << str;
    }

    else
    {
        int idx = 0;

        for (int i = 0; i < m; i++)
        {
            cout << str[idx];
            idx++;
            idx %= str.length();
        }
    }

    return 0;
}