#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;
    int e, f, g, h;
    int S, T;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);

    S = a + b + c + d;
    T = e + f + g + h;

    if (S >= T)
        printf("%d", S);

    else
        printf("%d", T);

    return 0;
}
