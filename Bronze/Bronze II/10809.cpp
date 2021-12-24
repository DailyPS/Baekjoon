#include <bits/stdc++.h>

using namespace std;

int alphabet[30];

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;

    cin >> s;

    memset(alphabet, -1, sizeof(alphabet));

    for (int i = 0; i < s.length(); i++)
    {
        if (alphabet[s[i] - 'a'] == -1)
            alphabet[s[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";

    return 0;
}