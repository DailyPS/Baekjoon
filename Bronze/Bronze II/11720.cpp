#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    int sum = 0;
    int tmp;

    cin >> tmp >> s;

    for (int i = 0; i < s.length(); i++)
        sum += s[i] - '0';

    cout << sum;

    return 0;
}