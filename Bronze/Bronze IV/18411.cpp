#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b ,&c);

    int f = a, s = -1;

    if (f < b)
    {
        f = b;
        s = a;
    }

    else
        s = b;

    if (f < c)
    {
        s = f;
        f = c;
    }

    else
    {
        if (s < c)
            s = c;
    }

    printf("%d", f + s);

    return 0;
}