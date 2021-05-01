#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        cin >> str;

        if (str.find("FBI") != std::string::npos)
        {
            found = true;
            cout << i + 1 << " ";
        }
    }

    if (!found)
        cout << "HE GOT AWAY!" << "\n";

    return 0;
}