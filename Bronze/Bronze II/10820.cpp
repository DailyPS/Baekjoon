#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(true)
    {
        int nc = 0, c = 0, n = 0, b = 0;

        getline(cin, str);

        if (cin.eof() == true)
            break;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                nc++;
            
            else if (str[i] >= 'A' && str[i] <= 'Z')
                c++;

            else if (str[i] >= '0' && str[i] <= '9')
                n++;

            else if (str[i] == ' ')
                b++;
        }

        cout << nc << " " << c << " " << n << " " << b << "\n";
    }

    return 0;
}