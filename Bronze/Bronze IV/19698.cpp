#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, w, h, l;

    scanf("%d %d %d %d", &n, &w, &h, &l);

    int max = (w / l) * (h / l);

    if (n >= max)
        printf("%d", max);

    else
        printf("%d", n);

    return 0;
}