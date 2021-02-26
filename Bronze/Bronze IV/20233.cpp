#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, x, b, y, t;

    scanf("%d %d %d %d %d", &a ,&x, &b, &y, &t);

    int f1, f2;

    f1 = a + 21 * (t - 30 > 0 ? x * (t - 30) : 0);
    f2 = b + 21 * (t - 45 > 0 ? y * (t - 45) : 0);

    printf("%d %d", f1 ,f2);

    return 0;
}