#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int p, m;
        int ans = 0;
        int seat[505] = { 0 };

        scanf("%d %d", &p, &m);

        for (int i = 0; i < p; i++)
        {
            int reserved;

            scanf("%d", &reserved);

            if (!seat[reserved] && reserved <= m)
                seat[reserved] = 1;

            else
                ans++;
        }

        printf("%d\n", ans);

        t--;
    }

    return 0;
}