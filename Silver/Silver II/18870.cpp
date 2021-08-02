#include <bits/stdc++.h>

using namespace std;

vector<int> cc;
vector<int> v;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        v.push_back(num);
        cc.push_back(num);
    }

    sort(cc.begin(), cc.end());
    cc.erase(unique(cc.begin(), cc.end()), cc.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(cc.begin(), cc.end(), v[i]) - cc.begin() << " ";

    return 0;
}
