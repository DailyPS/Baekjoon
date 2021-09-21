#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    string name[1005];
    string provider[1005];
    bool dup_check[1005];

    for (int i = 0; i < 1005; i++)
        dup_check[i] = false;

    cin >> n;

    int ans = n;

    for (int i = 0; i < n; i++)
    {
        string email;

        cin >> email;

        size_t previous = 0, current;
        current = email.find('@');
        name[i] = email.substr(previous, current-previous);

        previous = current + 1;
        current = email.find('@', previous);    
        provider[i] = email.substr(previous, current);
    }

    for (int i = 0; i < n; i++)
    {
        name[i].erase(remove(name[i].begin(), name[i].end(), '.'), name[i].end());

        size_t previous = 0, current;
        current = name[i].find('+');
        name[i] = name[i].substr(previous, current-previous);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        if (!dup_check[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (name[i].compare(name[j]) == 0 && provider[i].compare(provider[j]) == 0)
                {
                    ans--;
                    dup_check[j] = true;
                }
            }
        }   
    }

    cout << ans;

    return 0;
}