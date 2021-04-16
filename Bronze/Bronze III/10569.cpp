#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int v, e;
        int ans = 2;

        scanf("%d %d", &v, &e);

        printf("%d\n", ans - v + e);
    }

    return 0;
}