#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int c, v;

        scanf("%d %d", &c, &v);

        printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c % v);
    }

    return 0;
}