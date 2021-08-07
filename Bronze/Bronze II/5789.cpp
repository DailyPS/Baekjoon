#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        if (s[s.length() / 2] != s[s.length() / 2 - 1])
            cout << "Do-it-Not\n";

        else
            cout << "Do-it\n";
    }

    return 0;
}