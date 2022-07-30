#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

long long int lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);
        
        printf("%lld\n", lcm(a, b));
    }

    return 0;
}