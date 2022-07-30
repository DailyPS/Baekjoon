#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(true)
    {
        getline(cin, str);

        if (cin.eof() == true)
            break;

        cout << str << "\n";
    }

    return 0;
}