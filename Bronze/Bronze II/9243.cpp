#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool flag = true;
    string original, deletion;

    cin >> n;
    cin >> original >> deletion;

    if (n % 2)
    {
        for (int i = 0; i < original.length(); i++)
        {
            if (original[i] == deletion[i])
            {
                cout << "Deletion failed";
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Deletion succeeded";
    }

    else
    {
        for (int i = 0; i < original.length(); i++)
        {
            if (original[i] != deletion[i])
            {
                cout << "Deletion failed";
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Deletion succeeded";
    }

    return 0;
}