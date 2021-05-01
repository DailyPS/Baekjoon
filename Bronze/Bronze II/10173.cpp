#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    locale loc;

    while(true)
    {
        getline(cin, str);

        if (!str.compare("EOI"))
            break;

        for (int i = 0; i < str.length(); i++)
            str[i] = toupper(str[i], loc);

        if (str.find("NEMO") != std::string::npos)
            cout << "Found\n";

        else
            cout << "Missing\n";
    }

    return 0;
}