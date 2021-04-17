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
        int place;
        string str;

        cin >> place >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (i != place - 1)
                cout << str[i];
        }

        cout << "\n";
    }

    return 0;
}