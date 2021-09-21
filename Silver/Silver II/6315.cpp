#include <bits/stdc++.h>

using namespace std;

int n;
int x[105], y[105];

int watchable()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i % 2; j < n; j += 2)
        {
            if (x[i] == x[i + 1])
            {
                if (x[i] < x[j] && y[i] > y[i + 1] && y[j] < y[j + 1])
                    return 0;
            }

            else
            {
                if (y[i] > y[j] && x[i] > x[i + 1] && x[j] < x[j + 1])
                    return 0;
            }
        }
    }

    return 1;
}

int main(void)
{
    int num = 1;

    while(1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
            scanf("%d %d", &x[i], &y[i]);

        printf("Floor #%d\n", num++);

        if (watchable())
            printf("Surveillance is possible.\n\n");

        else
            printf("Surveillance is impossible.\n\n");
    }

    return 0;
}