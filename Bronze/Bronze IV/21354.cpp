#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (7 * a > 13 * b)
        printf("Axel");

    else if (7 * a < 13 * b)
        printf("Petra");

    else
        printf("lika");

    return 0;
}