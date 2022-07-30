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
        int r;
        string s;

        cin >> r >> s;

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < r; j++)
                cout << s[i];
        }

        cout << "\n";

        t--;
    }

    return 0;
}