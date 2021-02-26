#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a3, a2, a1, b3, b2, b1;

    scanf("%d %d %d %d %d %d", &a3, &a2, &a1, &b3, &b2, &b1);

    int at = a3 * 3 + a2 * 2 + a1 * 1;
    int bt = b3 * 3 + b2 * 2 + b1 * 1;

    if (at > bt)
        printf("A");

    else if (at < bt)
        printf("B");

    else
        printf("T");

    return 0;
}