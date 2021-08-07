#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    while(true)
    {
        string s;
        bool a_check[30] = { 0 };
        int cnt = 0;

        getline(cin, s);
        cin.clear();

        if(!s.compare("*"))
            break;

        int l = s.length();

        for (int i = 0; i < l; i++)
        {
            if (isalpha(s[i]))
            {
                if (!a_check[s[i] - 'a'])
                {
                    a_check[s[i] - 'a'] = true;
                    cnt++;
                }
            }
        }

        if (cnt == 26)
            cout << "Y\n";
        
        else
            cout << "N\n";
    }

    return 0;
}