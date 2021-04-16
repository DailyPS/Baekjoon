#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = n - i; j > 0; j--)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}