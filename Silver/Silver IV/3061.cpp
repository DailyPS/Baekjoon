#include <bits/stdc++.h>

using namespace std;

int t, n;
int ans = 0;
int ladder[1005];


int main(void)
{
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
            scanf("%d", &ladder[i]);

        int i, j;

        for (i = 1; i < n; i++)
        {
            int tmp = ladder[i];

            for (j = i - 1; j >= 0 && ladder[j] > tmp; j--)
            {
                ladder[j + 1] = ladder[j];
                ans++;
            }

            ladder[j + 1] = tmp;
        }

        printf("%d\n", ans);

        ans = 0;
    }

    return 0;
}
