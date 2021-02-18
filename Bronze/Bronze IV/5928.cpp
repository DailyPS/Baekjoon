#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int d, h, m;
    int ad, ah, am;

    scanf("%d %d %d", &d, &h, &m);

    ad = d - 11; ah = h - 11; am = m - 11;

    if (am < 0)
    {
        am += 60;
        ah -= 1;
    }

    if (ah < 0)
    {
        ah += 24;
        ad -= 1;
    }

    int ans = 1440 * ad + 60 * ah + am;

    if (ans < 0)
        printf("%d", -1);

    else
        printf("%d", ans);

    return 0;
}
