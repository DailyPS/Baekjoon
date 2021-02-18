#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double h, w;

    scanf("%lf %lf", &h, &w);

    if (h < w)
    {
        int temp = w;
        w = h;
        h = temp;
    }

    if (h >= 3 * w)
        printf("%.3lf", w);

    else if (h >= 1.5 * w)
        printf("%.3lf", h / 3);

    else
        printf("%.3lf", w / 2);

    return 0;
}
