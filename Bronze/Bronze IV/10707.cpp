#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d, p;
    int ans;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

    int temp1, temp2;

    temp1 = a * p;

    if (p <= c)
        temp2 = b;

    else
        temp2 = b + (p - c) * d;

    ans = min(temp1, temp2);

    printf("%d", ans);

    return 0;
}
