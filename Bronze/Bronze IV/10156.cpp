#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k, n, m;

    scanf("%d %d %d", &k, &n, &m);

    int ans = k * n - m;

    if (ans > 0)
        printf("%d", ans);

    else
        printf("0");

    return 0;
}
