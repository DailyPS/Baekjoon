#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int case_no = 0;

    while(true)
    {
        int a, b;
        string s;

        cin >> a >> s >> b;

        case_no++;

        if (!s.compare("E"))
            break;

        else
        {
            if (!s.compare(">"))
                cout << "Case " << case_no << ": " << (a > b ? "true\n" : "false\n");

            else if (!s.compare(">="))
                cout << "Case " << case_no << ": " << (a >= b ? "true\n" : "false\n");
            
            else if (!s.compare("<"))
                cout << "Case " << case_no << ": " << (a < b ? "true\n" : "false\n");

            else if (!s.compare("<="))
                cout << "Case " << case_no << ": " << (a <= b ? "true\n" : "false\n");

            else if (!s.compare("=="))
                cout << "Case " << case_no << ": " << (a == b ? "true\n" : "false\n");

            else if (!s.compare("!="))
                cout << "Case " << case_no << ": " << (a != b ? "true\n" : "false\n");
        }
    }

    return 0;
}