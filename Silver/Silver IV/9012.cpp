#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string PS;

        cin >> PS;

        int pair = 0;
        bool wrong = false;

        for (int i = 0; i < PS.length(); i++)
        {
            if (PS[i] == '(')
                pair++;

            else if (PS[i] == ')')
            {
                if (pair > 0)
                    pair--;

                else
                {
                    pair--;
                    wrong = true;
                }
            }
        }

        if (!pair && !wrong)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}