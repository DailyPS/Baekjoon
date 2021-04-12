#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n;
    double ans;

    scanf("%lld", &n);

    ans = 2 * M_PI * sqrt(n / M_PI);

    printf("%lf", ans);

    return 0;
}