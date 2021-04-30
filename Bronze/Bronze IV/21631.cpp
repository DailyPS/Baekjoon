#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int w, b;

    scanf("%lld %lld", &w, &b);

    if (w >= b)
        printf("%lld", b);

    else
        printf("%lld", 1 + w);

    return 0;
}