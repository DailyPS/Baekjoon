#include <bits/stdc++.h>

using namespace std;

int player[1005];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if (a == b && b == c)
            player[i] = 10000 + a * 1000;

        else if (a != b && b != c && c != a)
            player[i] = max({a, b, c}) * 100;

        else
        {
            if (a == b || a == c)
                player[i] = 1000 + a * 100;

            else
                player[i] = 1000 + b * 100;
        }
    }

    int ans = -1;

    for (int i = 0; i < n; i++)
        ans = max(ans, player[i]);

    printf("%d", ans);

    return 0;
}