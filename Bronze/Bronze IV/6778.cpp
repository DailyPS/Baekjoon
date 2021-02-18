#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, e;
    int line_flag = 0;

    scanf("%d %d", &a, &e);

    if (a >= 3 && e <= 4)
    {
        printf("TroyMartian");
        line_flag = 1;
    }

    if (line_flag)
        printf("\n");

    if (a <= 6 && e >= 2)
    {
        printf("VladSaturnian");
        line_flag = 1;
    }

    if (line_flag)
        printf("\n");

    if (a <= 2 && e <= 3)
    {
        printf("GraemeMercurian");
        line_flag = 1;
    }

    return 0;
}
