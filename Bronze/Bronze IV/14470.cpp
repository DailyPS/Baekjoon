#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d, e;
    int ans = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a < 0)
    {
        ans += (0 - a) * c;
        ans += d;
        ans += b * e;
    }

    else
        ans += (b - a) * e;

    printf("%d", ans);

    return 0;
}
