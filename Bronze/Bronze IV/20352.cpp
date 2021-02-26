#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double a, ans;

    scanf("%lf", &a);

    ans = sqrt(a / M_PI) * 2 * M_PI;

    printf("%lf", ans);

    return 0;
}