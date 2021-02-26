#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n % 2)
        printf("0");

    else
    {
        if ((n / 2) % 2)
            printf("1");

        else
            printf("2");
    }

    return 0;
}