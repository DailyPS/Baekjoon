#include <bits/stdc++.h>

using namespace std;

double m = 1609.344;
double g = 3.785411784;

int main(void)
{
    double x;

    scanf("%lf", &x);

    double ans = (g / ((m * x) / 1000)) * 100;

    printf("%.6lf", ans);

    return 0;
}
