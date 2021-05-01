#include <bits/stdc++.h>

using namespace std;

vector<pair<int, string>> v;

bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int n;
        string str;

        cin >> n >> str;

        v.push_back(make_pair(n, str));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << "\n";

    return 0;
}