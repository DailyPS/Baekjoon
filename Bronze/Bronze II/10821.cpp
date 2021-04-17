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
        if (str[i] == ',')
            ans++;
    }

    printf("%d", ans + 1);

    return 0;
}