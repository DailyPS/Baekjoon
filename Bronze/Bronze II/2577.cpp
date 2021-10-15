#include <bits/stdc++.h>

using namespace std;

int digit[10];

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    int calc = a * b * c;

    while(calc > 0 )
    {
        int res = calc % 10;

        digit[res]++;

        calc /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << digit[i] << "\n";

    return 0;
}