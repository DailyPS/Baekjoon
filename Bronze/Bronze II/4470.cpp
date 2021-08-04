#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;

        getline(cin, s);
        cin.clear();

        cout << i + 1 << ". " << s << "\n";
    }


    return 0;
}