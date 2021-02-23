#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, a, b;

    scanf("%d", &n);

    if (n % 10 != 0)
    {
        a = n / 10;
        b = n % 10;
        printf("%d", a + b);
    }

    else
    {
        a = n / 100;
        b = n % 100;
        printf("%d", a + b);
    }

    return 0;
}