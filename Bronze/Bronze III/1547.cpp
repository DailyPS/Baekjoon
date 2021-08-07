#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int cup[4] = { 0, 1, 0, 0 };

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;

        cin >> x >> y;

        if (cup[x] == 1)
        {
            cup[x] = 0;
            cup[y] = 1;
        }

        else if (cup[y] == 1)
        {
            cup[y] = 0;
            cup[x] = 1;
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        if (cup[i])
            cout << i;
    }

    return 0;
}