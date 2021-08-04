#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    int idx;

    cin >> s;

    s.erase(remove(s.begin(), s.end(), 'C'), s.end());
    s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    s.erase(remove(s.begin(), s.end(), 'M'), s.end());
    s.erase(remove(s.begin(), s.end(), 'B'), s.end());
    s.erase(remove(s.begin(), s.end(), 'R'), s.end());
    s.erase(remove(s.begin(), s.end(), 'I'), s.end());
    s.erase(remove(s.begin(), s.end(), 'D'), s.end());
    s.erase(remove(s.begin(), s.end(), 'G'), s.end());
    s.erase(remove(s.begin(), s.end(), 'E'), s.end());

    cout << s;

    return 0;
}