#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    printf("%c", str[0]);

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == '-')
            printf("%c", str[i + 1]);
    }

    return 0;
}