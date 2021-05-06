#include <bits/stdc++.h>

using namespace std;

vector<string> croatia;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int ans = 0;

    cin >> str;

    for(int i = 0; i < str.length();)
    {
        if (!str.compare(i, 2, "c="))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 2, "c-"))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 3, "dz="))
        {
            ans++;
            i += 3;
        }
        
        else if (!str.compare(i, 2, "d-"))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 2, "lj"))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 2, "z="))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 2, "nj"))
        {
            ans++;
            i += 2;
        }

        else if (!str.compare(i, 2, "s="))
        {
            ans++;
            i += 2;
        }

        else
        {
            ans++;
            i += 1;
        }
    }

    cout << ans;

    return 0;
}