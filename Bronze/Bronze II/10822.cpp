#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<string> v;
    string s;
    string buf;

    cin >> s;

    istringstream ss(s);

    while (getline(ss, buf, ','))
        v.push_back(buf);

    int sum = 0;
    int size = v.size();

    for (int i = 0; i < size; i++)
        sum += stoi(v[i]);

    cout << sum;

    return 0;
}