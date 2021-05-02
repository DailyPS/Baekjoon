#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string first, ans;

    cin >> n >> first;

    ans = first; 

    for (int i = 1; i < n; i++)
    {
        string comp;

        cin >> comp; 

        for (int j = 0; j < first.length(); j++)
        {
            if (first[j] != comp[j])
                ans[j] = '?';
        }
    }

    cout << ans;

    return 0;
}