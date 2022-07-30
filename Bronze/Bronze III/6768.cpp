#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int j;
    int ans = 0;

    scanf("%d", &j);

    if (j < 4)
        printf("%d", ans);

    else
    {
        ans = ((j - 1) * (j - 2) * (j - 3)) / 6;
        printf("%d", ans);
    }

    return 0;
}
