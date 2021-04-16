#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m)
{
    if (m == 0)
        return n;

    else
        return gcd(m, n % m);
}

int lcm(int n, int m)
{
    return n * (m / gcd(n, m));
}

int main(void)
{
    int n, m;
    int agcd, alcm;

    scanf("%d %d", &n, &m);

    agcd = gcd(n, m);
    alcm = lcm(n, m);

    printf("%d\n%d", agcd, alcm);

    return 0;
}