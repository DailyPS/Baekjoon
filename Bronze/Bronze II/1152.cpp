#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    int cnt = 0;

    getline(cin, s);

    if (s.at(0) == ' ')
        cnt--;

    if (s.at(s.length() - 1) != ' ')
        cnt++;

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ' ')
            cnt++;
    }

    cout << cnt;

    return 0;
}