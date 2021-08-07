#include <bits/stdc++.h>

using namespace std;

int string_sum(string s)
{
    int ret = 0;
    int tmp = 0;
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (s[i] == '+')
        {
            ret += tmp;
            tmp = 0;
        }

        else
            tmp = tmp * 10 + (s[i] - '0');
    }

    ret += tmp;

    return ret;
}

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

        if (s.find('=') != string::npos)
        {
            cout << "skipped" << "\n";
            continue;
        }

        else
            cout << string_sum(s) << "\n";
    }

    return 0;
}