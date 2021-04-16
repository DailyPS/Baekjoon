#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("*");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= n; j++)
                printf("* ");
        }

        else
        {
            for (int j = 1; j <= n; j++)
                printf(" *");
        }

        printf("\n");
    }

    return 0;
}