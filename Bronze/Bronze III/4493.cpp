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
        int n;
        int w1 = 0, w2 = 0;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            char c1, c2;

            cin >> c1 >> c2;

            if ((c1 == 'R' && c2 == 'S') || (c1 == 'S' && c2 == 'P') || (c1 == 'P' && c2 == 'R'))
                w1++;

            else if ((c2 == 'R' && c1 == 'S') || (c2 == 'S' && c1 == 'P') || (c2 == 'P' && c1 == 'R'))
                w2++;
        }

        if (w1 > w2)
            cout << "Player 1\n";

        else if (w1 < w2)
            cout << "Player 2\n";
        
        else
            cout << "TIE\n";

        t--;
    }
    return 0;
}