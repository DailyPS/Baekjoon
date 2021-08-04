#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        string s;
        int sum = 0;

        cin >> s;

        if (s.find('A') == string::npos)
            sum += 'A';

        if (s.find('B') == string::npos)
            sum += 'B';

        if (s.find('C') == string::npos)
            sum += 'C';

        if (s.find('D') == string::npos)
            sum += 'D';

        if (s.find('E') == string::npos)
            sum += 'E';

        if (s.find('F') == string::npos)
            sum += 'F';
        
        if (s.find('G') == string::npos)
            sum += 'G';

        if (s.find('H') == string::npos)
            sum += 'H';

        if (s.find('I') == string::npos)
            sum += 'I';

        if (s.find('J') == string::npos)
            sum += 'J';

        if (s.find('K') == string::npos)
            sum += 'K';

        if (s.find('L') == string::npos)
            sum += 'L';

        if (s.find('M') == string::npos)
            sum += 'M';

        if (s.find('N') == string::npos)
            sum += 'N';

        if (s.find('O') == string::npos)
            sum += 'O';

        if (s.find('P') == string::npos)
            sum += 'P';

        if (s.find('Q') == string::npos)
            sum += 'Q';

        if (s.find('R') == string::npos)
            sum += 'R';

        if (s.find('S') == string::npos)
            sum += 'S';

        if (s.find('T') == string::npos)
            sum += 'T';

        if (s.find('U') == string::npos)
            sum += 'U';

        if (s.find('V') == string::npos)
            sum += 'V';

        if (s.find('W') == string::npos)
            sum += 'W';

        if (s.find('X') == string::npos)
            sum += 'X';

        if (s.find('Y') == string::npos)
            sum += 'Y';

        if (s.find('Z') == string::npos)
            sum += 'Z';

        cout << sum << "\n";

        t--;
    }
    return 0;
}