#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int ca, cc, ce;
    int sa, sc, se;

    cin >> ca >> cc >> ce;
    cin >> sa >> sc >> se;

    if (sc >= (cc % 2 ? cc / 2 + 1 : cc / 2))
    {
        if (sc >= cc)
        {
            if (sa >= (ca % 2 ? ca / 2 + 1 : ca / 2))
            {
                if (sa >= ca)
                    cout << "A";

                else
                    cout << "B";
            }

            else
                cout << "C";
        }

        else
            cout << "D";
    }

    else
        cout << "E";

    return 0;
}