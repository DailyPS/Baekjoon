#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int wa = 0, wb = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;

        cin >> a >> b;

        if (a > b)
            wa++;

        else if (a < b)
            wb++;
    }

    cout << wa << " " << wb;

    return 0;
}