#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    cin.ignore();

    for (int t = 0; t < n; t++)
    {
        string s;
        bool a_check[30] = { 0 };
        int cnt = 0;

        getline(cin, s);

        int l = s.length();

        for (int i = 0; i < l; i++)
        {
            if (isalpha(s[i]))
            {
                s[i] = tolower(s[i]);

                if (!a_check[s[i] - 'a'])
                {
                    a_check[s[i] - 'a'] = true;
                    cnt++;
                }
            }
        }

        if (cnt == 26)
            cout << "pangram\n";
        
        else
        {
            cout << "missing ";

            for (int i = 0; i < 26; i++)
            {
                if (!a_check[i])
                    cout << (char) (i + 'a');
            }

            cout << "\n";
        }

    }

    return 0;
}