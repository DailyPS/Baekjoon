#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    int joi = 0, ioi = 0;

    cin >> s;

    for (int i = 0; i < s.length() - 2; i++)
    {
        if (!s.compare(i, 3, "JOI"))
            joi++;

        if (!s.compare(i, 3, "IOI"))
            ioi++;
    }

    cout << joi << "\n" << ioi;

    return 0;
}