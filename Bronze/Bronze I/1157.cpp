#include <bits/stdc++.h>

using namespace std;

int alphabet[30] = { 0 };

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        char c = tolower(s[i]);

        alphabet[c - 'a']++;
    }

    int max_a = INT_MIN;
    int max_ap;
    bool dup = false;

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > max_a)
        {
            max_a = alphabet[i];
            max_ap = i;
            dup = false;
        }

        else if (alphabet[i] == max_a)
            dup = true;
    }

    if (dup)
        cout << "?";

    else
        cout << (char)(max_ap + 'A');

    return 0;
}