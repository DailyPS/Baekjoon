#include <bits/stdc++.h>

using namespace std;

vector<string> v;

bool compare(const string &a, const string &b)
{
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0] << "\n";

    for (int i = 1; i < n; i++)
    {
        if (v[i].compare(v[i - 1]) != 0)
            cout << v[i] << "\n";
    }

    return 0;
}
