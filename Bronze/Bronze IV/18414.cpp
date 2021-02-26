#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x, l, r;

    scanf("%d %d %d", &x, &l, &r);

    if (x <= l)
        printf("%d", l);

    else if (x >= r)
        printf("%d", r);

    else
        printf("%d", x);

    return 0;
}