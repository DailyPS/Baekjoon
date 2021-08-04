#include <bits/stdc++.h>

using namespace std;

map<int, string> ntos;
map<string, int> ston;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string s;

        cin >> s;

        ntos[i] = s;
        ston[s] = i;
    }

    for (int i = 0; i < m; i++)
    {
        string s;

        cin >> s;

        if (isdigit(s[0]))
            cout << ntos[stoi(s)] << "\n";

        else
            cout << ston[s] << "\n";
    }

    return 0;
}