#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h, m, num, oh;
    cin >> h >> m >> num;
    m += num;
    if (m >= 60)
    {
        oh = (m - (m % 60)) / 60;
        m = m % 60;
        h += oh;
    }
    if (h >= 24)
        h -= 24;
    cout << h << " " << m;
    return 0;
}