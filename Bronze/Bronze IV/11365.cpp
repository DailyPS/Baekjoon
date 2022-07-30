#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(1)
    {
        string str;

        getline(cin, str);

        if (str.compare("END") == 0)
            break;
        
        for (int i = str.length() - 1; i >= 0; i--)
            cout << str[i];

        cout << "\n";
    }

    return 0;
}