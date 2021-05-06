#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int alphabet_count[27] = { 0 };
        string str;
        bool finished = true;

        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (alphabet_count[str[i] - 'a'] == 0 || str[i] == str[i - 1])
                alphabet_count[str[i] - 'a']++;

            else
            {
                finished = false;
                break;
            }
        }

        if (finished)
            ans++;
    }

    cout << ans;

    return 0;
}