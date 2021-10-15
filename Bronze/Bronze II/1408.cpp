#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string cur, start;

    cin >> cur >> start;

    int h, m, s;
    string ah, am, as;

    s = stoi(start.substr(6, 2)) - stoi(cur.substr(6, 2));
    m = stoi(start.substr(3, 2)) - stoi(cur.substr(3, 2));
    h = stoi(start.substr(0, 2)) - stoi(cur.substr(0, 2));

    if (s < 0)
    {
        s += 60;
        m -= 1;
    }

    if (m < 0)
    {
        m += 60;
        h -= 1;
    }

    if (h < 0)
    {
        h += 24;
    }

    as = to_string(s);
    am = to_string(m);
    ah = to_string(h);

    cout << (ah.length() == 1 ?  "0" + ah : ah) << ":" << (am.length() == 1 ? "0" + am : am) << ":" << (as.length() == 1 ? "0" + as : as) << "\n";
    
    return 0;
}