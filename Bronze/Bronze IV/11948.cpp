#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d, e, f;
    int sum1, sum2;
    int sum3 = -1;

    scanf("%d %d %d %d %d %d", &a ,&b, &c, &d, &e, &f);

    sum1 = a + b + c + d;
    sum2 = max(e, f);

    sum3 = max(sum3, (sum1 - a) + sum2);
    sum3 = max(sum3, (sum1 - b) + sum2);
    sum3 = max(sum3, (sum1 - c) + sum2);
    sum3 = max(sum3, (sum1 - d) + sum2);

    printf("%d", sum3);

    return 0;
}
