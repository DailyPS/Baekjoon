#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long int ohm = 0;

    for (int i = 0; i < 3; i++)
    {
        string s;

        cin >> s;

        if (i != 2)
        {
            if (!s.compare("black"))
                ohm = ohm * 10 + 0;

            else if (!s.compare("brown"))
                ohm = ohm * 10 + 1;

            else if (!s.compare("red"))
                ohm = ohm * 10 + 2;

            else if (!s.compare("orange"))
                ohm = ohm * 10 + 3;

            else if (!s.compare("yellow"))
                ohm = ohm * 10 + 4;

            else if (!s.compare("green"))
                ohm = ohm * 10 + 5;

            else if (!s.compare("blue"))
                ohm = ohm * 10 + 6;

            else if (!s.compare("violet"))
                ohm = ohm * 10 + 7;

            else if (!s.compare("grey"))
                ohm = ohm * 10 + 8;

            else if (!s.compare("white"))
                ohm = ohm * 10 + 9;
        }

        else
        {
            if (!s.compare("black"))
                ohm = ohm * 1;

            else if (!s.compare("brown"))
                ohm = ohm * 10;

            else if (!s.compare("red"))
                ohm = ohm * 100;

            else if (!s.compare("orange"))
                ohm = ohm * 1000;

            else if (!s.compare("yellow"))
                ohm = ohm * 10000;

            else if (!s.compare("green"))
                ohm = ohm * 100000;

            else if (!s.compare("blue"))
                ohm = ohm * 1000000;

            else if (!s.compare("violet"))
                ohm = ohm * 10000000;

            else if (!s.compare("grey"))
                ohm = ohm * 100000000;

            else if (!s.compare("white"))
                ohm = ohm * 1000000000;
        }
    }

    cout << ohm;

    return 0;
}