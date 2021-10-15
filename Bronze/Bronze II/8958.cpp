#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        int score = 0;

        cin >> str;

        int base = 1;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == 'O')
            {
                score += base;
                base++;
            }

            else
                base = 1;
        }

        cout << score << "\n";
    }

    return 0;
}