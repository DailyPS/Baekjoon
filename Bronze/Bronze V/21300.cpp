#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, ans = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        ans += n * 5;
    }

    printf("%d", ans);

    return 0;
}