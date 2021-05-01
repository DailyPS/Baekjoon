#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            for (int j = i; j < n; j++)
                printf(" ");

            printf("*");

            int j = 1;

            for (; j < 2 * (i - 1); j++)
                printf(" ");

            for (; j < 2 * (i - 1) + 1; j++)
                printf("*");
        }

        else
        {
            for (int j = 1; j <= 2 * (i - 1) + 1; j++)
                printf("*");
        }

        printf("\n");
    }

    return 0;
}