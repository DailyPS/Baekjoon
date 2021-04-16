#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        ans += b % a;
    }

    printf("%d", ans);

    return 0;
}