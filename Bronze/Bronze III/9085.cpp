#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n;
        int sum = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            int tmp;

            scanf("%d", &tmp);

            sum += tmp;
        }

        printf("%d\n", sum);

        t--;
    }

    return 0;
}