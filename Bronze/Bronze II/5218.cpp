#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t)
    {
        string str1, str2;

        cin >> str1 >> str2;

        cout << "Distances:";

        for (int i = 0; i < str1.length(); i++)
        {
            int distance = str2[i] - str1[i];
            cout << " " << (distance >= 0 ? distance : distance + 26);
        }
        
        cout << "\n";

        t--;
    }

    return 0;
}