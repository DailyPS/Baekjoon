#include <bits/stdc++.h>

using namespace std;

int bitmask[21] = { 0 };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string command;
        int num;

        cin >> command;

        if (!command.compare("add"))
        {
            cin >> num;

            if (!bitmask[num])
                bitmask[num] = 1;
        }

        else if (!command.compare("remove"))
        {
            cin >> num;

            if (bitmask[num])
                bitmask[num] = 0;
        }

        else if (!command.compare("check"))
        {
            cin >> num;

            if (bitmask[num])
                cout << "1\n";

            else
                cout << "0\n";
        }

        else if (!command.compare("toggle"))
        {
            cin >> num;

            if (bitmask[num])
                bitmask[num] = 0;

            else
                bitmask[num] = 1;
        }

        else if (!command.compare("all"))
        {
            for (int i = 1; i <= 20; i++)
                bitmask[i] = 1;
        }

        else if (!command.compare("empty"))
        {
            for (int i = 1; i <= 20; i++)
                bitmask[i] = 0;
        }
    }

    return 0;
}