#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", (int) a / b);
    printf(".");

    a = a % b;

    for (int i = 0; i < 1000; i++)
    {
        a *= 10;
        printf("%d", (int) a / b);
        a = a % b;
    }

    return 0;
}