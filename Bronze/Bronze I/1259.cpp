#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(string str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        if (str[i] != str[str.length() - 1 - i])
            return false;
    }

    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(1)
    {
        string str;

        cin >> str;

        if (str.compare("0") == 0)
            break;

        if (check_palindrome(str))
            printf("yes\n");

        else
            printf("no\n");
    }

    return 0;
}