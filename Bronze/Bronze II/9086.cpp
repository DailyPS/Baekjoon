#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t)
    {
        string str;

        cin >> str;
        
        cout << str[0] << str[str.length() - 1] << "\n";

        t--;
    }

    return 0;
}