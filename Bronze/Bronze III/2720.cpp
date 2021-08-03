#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        int num;

        cin >> num;

        cout << num / 25 << " ";
        num %= 25;

        cout << num / 10 << " ";
        num %= 10;

        cout << num / 5 << " ";
        num %= 5;

        cout << num << "\n";

        t--;
    }
    return 0;
}