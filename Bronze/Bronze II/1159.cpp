#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int a_cnt[30] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        a_cnt[s[0] - 'a']++;
    }

    string ans = "";

    for (int i = 0; i < 26; i++)
    {
        if (a_cnt[i] >= 5)
        {
            char tmp = i + 'a';
            ans += tmp;
        }
    }

    if (!ans.compare(""))
        cout << "PREDAJA";

    else
        cout << ans;

    return 0;
}