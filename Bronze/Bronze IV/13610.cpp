#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);

    int lap = 1;

    if ((x % (y - x)) == 0)
        lap += x / (y - x);

    else
        lap += (x / (y - x)) + 1;

    printf("%d", lap);

    return 0;
}
