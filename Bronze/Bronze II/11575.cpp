#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        int a, b;
        string s;
        string ci = "";

        cin >> a >> b >> s;

        for (int i = 0; i < s.length(); i++)
        {
            char cipher = ((a * (s[i] - 'A') + b) % 26) + 'A';
            ci += cipher;
        }

        cout << ci << "\n";

        t--;
    }

    return 0;
}