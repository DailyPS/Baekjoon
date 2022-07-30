#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int reject = 0;
    int seat[105] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int seat_num;

        cin >> seat_num;

        if (!seat[seat_num])
            seat[seat_num]++;

        else
            reject++;
    }

    cout << reject;

    return 0;
}