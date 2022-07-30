#include <bits/stdc++.h>

using namespace std;

void print_star(int x, int y, int num)
{
    if ((x / num) % 3 == 1 && (y / num) % 3 == 1)
        printf(" ");

    else
    {
        if (num / 3 == 0)
            printf("*");

        else
            print_star(x, y, num / 3);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
            print_star(i, j, n);

        printf("\n");
    }

    return 0;
}