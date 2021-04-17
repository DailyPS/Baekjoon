#include <bits/stdc++.h>

using namespace std;

int alphabet[30] = { 0 };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
        alphabet[str[i] - 97]++;

    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";

    return 0;
}