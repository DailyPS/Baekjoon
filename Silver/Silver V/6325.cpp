#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t = 1;

    while(1)
    {
        int n, flag = 0;
        int alphabet[27] = { 0 };
        char s1, op, s2;

        cin >> n;

        if (n == 0)
            break;

        alphabet[0] = 1;
        
        for (int i = 0; i < n; i++)
        {
            cin >> s1 >> op >> s2;

            alphabet[s1 - 'a'] = alphabet[s2 - 'a'];
        }

        cout << "Program #" << t << "\n";

        for (int i = 0; i < 26; i++)
        {
            if (alphabet[i])
            {
                flag = 1;
                cout << (char)('a' + i) << " ";
            }
        }

        if (!flag)
            cout << "none";

        cout << "\n\n";

        t++;
    }

    return 0;
}