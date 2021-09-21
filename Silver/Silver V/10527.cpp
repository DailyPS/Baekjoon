#include <bits/stdc++.h>

using namespace std;

vector<string> DOM;
vector<string> Kattis;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        DOM.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        Kattis.push_back(s);
    }

    sort(DOM.begin(), DOM.end());
    sort(Kattis.begin(), Kattis.end());

    int idx_d = 0, idx_k = 0;

    while(idx_d < n && idx_k < n)
    {
        if (DOM[idx_d].compare(Kattis[idx_k]) > 0)
            idx_k++;

        else if (DOM[idx_d].compare(Kattis[idx_k]) < 0)
            idx_d++;

        else
        {
            ans++;
            idx_d++;
            idx_k++;
        }
    }

    cout << ans;

    return 0;
}