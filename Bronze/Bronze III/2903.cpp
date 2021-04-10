#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    long long ans;

    scanf("%d", &n);

    ans = pow(2 * pow(2, n - 1) + 1, 2);

    printf("%lld", ans);

    return 0;
}