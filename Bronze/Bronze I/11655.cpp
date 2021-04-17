#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int tmp = str[i] + 13;

            if (tmp > 'Z')
                str[i] = str[i] + 13 - '[' + 'A';

            else
                str[i] = str[i] + 13;
        }

        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            int tmp = str[i] + 13;

            if (tmp > 'z')
                str[i] = str[i] + 13 - '{' + 'a';

            else
                str[i] = str[i] + 13;
        }
    }

    cout << str;

    return 0;
}