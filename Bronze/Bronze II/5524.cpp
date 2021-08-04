#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    vector<string> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        v.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].length(); j++)
            v[i][j] = tolower(v[i][j]);
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << "\n";

    return 0;
}