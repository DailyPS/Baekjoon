#include <bits/stdc++.h>

using namespace std;

int checksum(string s)
{
    int l = s.length();
    int ret = 0;

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
            ret += (i + 1) * 0;

        else
            ret += (i + 1) * (s[i] - 'A' + 1);
    }

    return ret;
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    while(true)
    {
        string s;

        getline(cin, s);
        cin.clear();

        if (!s.compare("#"))
            break;

        cout << checksum(s) << "\n";
    }
    return 0;
}