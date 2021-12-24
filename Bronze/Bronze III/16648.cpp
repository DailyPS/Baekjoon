#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t, p;
    double ans;

    scanf("%d %d", &t, &p);

    if (p >= 20)
    {
        double d1 = (double) (100 - p) / t;
        double d2 = (double) d1 / 2;

        ans = (double) (p - 20) / d1 + (double) 20 / d2;

        printf("%lf", ans);
    }

    else
    {
        double d1 = (double) (80 + 2 * (20 - p)) / t;
        double d2 = (double) d1 / 2;

        ans = (double) p / d2;

        printf("%lf", ans);
    }

    return 0;
}