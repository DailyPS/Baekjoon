#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int ans = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tmp;

        scanf("%d", &tmp);

        ans += tmp;
        ans -= 1;
    }

    printf("%d", ans);

    return 0;
}