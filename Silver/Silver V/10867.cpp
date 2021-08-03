#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;

        v.push_back(tmp);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int size = v.size();

    for (int i = 0; i < size; i++)
        cout << v[i] << " ";

    return 0;
}