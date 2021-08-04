#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a[15] = { 0 };
    int b[15] = { 0 };

    int wa = 0, wb = 0;

    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
            wa++;

        else if (a[i] < b[i])
            wb++;
    }

    if (wa > wb)
        cout << "A";
    
    else if (wa < wb)
        cout << "B";

    else
        cout << "D";

    return 0;
}