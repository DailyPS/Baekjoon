#include <bits/stdc++.h>

using namespace std;

vector<string> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
        v.push_back(str.substr(i));

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";

    return 0;
}