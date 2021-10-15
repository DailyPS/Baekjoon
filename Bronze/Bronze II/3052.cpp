#include <bits/stdc++.h>

using namespace std;

int res[50];

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int ans = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;

        cin >> num;

        res[num % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (res[i])
            ans++;
    }

    cout << ans;

    return 0;
}