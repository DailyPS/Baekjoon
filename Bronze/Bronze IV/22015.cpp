#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    int max_konpeito = max(a, b);
    max_konpeito = max(max_konpeito, c);

    cout << (max_konpeito - a) + (max_konpeito - b) + (max_konpeito - c);

    return 0;
}