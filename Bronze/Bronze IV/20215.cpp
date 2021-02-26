#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int w, h;
    double ans;

    scanf("%d %d", &w, &h);

    ans = w + h - sqrt(w * w + h * h);

    printf("%lf", ans);

    return 0;
}