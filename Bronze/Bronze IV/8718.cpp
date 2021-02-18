#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long x, k;
    long long ans = 0;

    scanf("%lld %lld", &x, &k);

    x *= 1000;
    k *= 1000;

    long long temp = 7 * k;

    if (temp <= x)
        ans = max(ans, temp);

    temp = 3.5 * k;

    if (temp <= x)
        ans = max(ans, temp);

    temp = 1.75 * k;

    if (temp <= x)
        ans = max(ans, temp);

    printf("%lld", ans);

    return 0;
}
