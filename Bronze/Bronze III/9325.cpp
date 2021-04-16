#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int s;

        scanf("%d", &s);

        int n;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            int a, b;

            scanf("%d %d", &a, &b);

            s += a * b;
        }

        printf("%d\n", s);

        t--;
    }

    return 0;
}