#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int a[5];
    int ans = 0;

    scanf("%d", &t);

    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 5; i++)
    {
        if (t == a[i])
            ans++;
    }

    printf("%d", ans);

    return 0;
}
