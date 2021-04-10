#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 6; i >= 0 ; i--)
    {
        int divisor = pow(2, i);

        ans += (int) n / divisor;
        n = n % divisor;
    }

    printf("%d", ans);

    return 0;
}