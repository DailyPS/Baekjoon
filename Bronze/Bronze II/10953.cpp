#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int a, b;

        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);

        t--;
    }

    return 0;
}