#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 2 * (n - i); j > 0; j--)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 2 * (n - i); j > 0; j--)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}