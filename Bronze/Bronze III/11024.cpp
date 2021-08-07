#include <bits/stdc++.h>

using namespace std;

int checksum(string s)
{
    int ret = 0;
    int tmp = 0;
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            ret += tmp;
            tmp = 0;
        }

        else
            tmp = tmp * 10 + s[i] - '0';
    }

    ret += tmp;

    return ret;
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;
    cin.ignore();

    while(t)
    {
        string s;

        getline(cin, s);
        cin.clear();

        cout << checksum(s) << "\n";

        t--;
    }
    return 0;
}