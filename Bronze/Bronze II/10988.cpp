#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(string str)
{
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
            return false;
    }

    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    if (check_palindrome(str))
        printf("1");

    else
        printf("0");

    return 0;
}
