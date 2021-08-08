#include <bits/stdc++.h>

using namespace std;

set<string> not_see;
vector<string> nothing;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        not_see.insert(s);
    }

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        if (not_see.find(s) != not_see.end())
            nothing.push_back(s);
    }

    sort(nothing.begin(), nothing.end());

    int size = nothing.size();

    cout << size << "\n";

    for (int i = 0; i < size; i++)
        cout << nothing[i] << "\n";

    return 0;
}