#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long r, c, n;
    long long ans;

    scanf("%lld %lld %lld", &r, &c, &n);

    long long cr = r / n;
    long long cc = c / n;

    if (r % n)
        cr++;

    if (c % n)
        cc++;

    ans = cr * cc;

    printf("%lld", ans);

    return 0;
}

