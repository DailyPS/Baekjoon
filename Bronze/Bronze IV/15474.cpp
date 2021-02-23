#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, a, b, c, d;

    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

    int sum1 = 0, sum2 = 0;
    int q1, q2;

    q1 = n / a + (n % a > 0 ? 1 : 0);
    q2 = n / c + (n % c > 0 ? 1 : 0);

    sum1 = q1 * b;
    sum2 = q2 * d;

    if (sum1 >= sum2)
        printf("%d", sum2);

    else
        printf("%d", sum1);

    return 0;
}