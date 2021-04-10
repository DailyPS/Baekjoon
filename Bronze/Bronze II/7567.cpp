#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string plate;

    cin >> plate;

    int ans = 10;

    for (int i = 1; i < plate.size(); i++)
    {
        if (plate[i] == plate[i - 1])
            ans += 5;

        else
            ans += 10;
    }

    printf("%d", ans);

    return 0;
}