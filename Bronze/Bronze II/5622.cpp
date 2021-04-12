#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int ans = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'C')
            ans += 3;

        else if (str[i] >= 'D' && str[i] <= 'F')
            ans += 4;

        else if (str[i] >= 'G' && str[i] <= 'I')
            ans += 5;

        else if (str[i] >= 'J' && str[i] <= 'L')
            ans += 6;

        else if (str[i] >= 'M' && str[i] <= 'O')
            ans += 7;

        else if (str[i] >= 'P' && str[i] <= 'S')
            ans += 8;

        else if (str[i] >= 'T' && str[i] <= 'V')
            ans += 9;

        else
            ans += 10;
    }

    printf("%d", ans);
    
    return 0;
}