#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h, m, s;
    int dur;
    int ph, pm, ps;

    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &dur);

    ph = dur / 3600;
    dur = dur % 3600;
    pm = dur / 60;
    ps = dur % 60;

    s += ps;

    if (s >= 60)
    {
        pm += s / 60;
        s = s % 60;
    }

    m += pm;

    if (m >= 60)
    {
        ph += m / 60;
        m = m % 60;
    }

    h += ph;

    if (h >= 24)
        h = h % 24;

    printf("%d %d %d", h , m , s);

    return 0;
}
