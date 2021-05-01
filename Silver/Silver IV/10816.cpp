#include <bits/stdc++.h>

using namespace std;

int pos[10000005] = { 0 };
int neg[10000005] = { 0 };

int main(void)
{
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;

        scanf("%d", &num);

        if (num >= 0)
            pos[num]++;

        else
            neg[0 - num]++;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int num;

        scanf("%d", &num);

        if (num >= 0)
            printf("%d ", pos[num]);

        else
            printf("%d ", neg[0 - num]);
    }

    return 0;
}