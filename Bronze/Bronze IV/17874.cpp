#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, h, v;

    scanf("%d %d %d", &n ,&h, &v);

    int ans = 4 * max(h, n - h) * max(v, n - v);

    printf("%d", ans);

    return 0;
}