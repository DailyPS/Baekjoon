#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int yscore = 0;
        int kscore = 0;

        for (int i = 0; i < 9; i++)
        {
            int a, b;

            scanf("%d %d", &a, &b);

            yscore += a;
            kscore += b;
        }

        if (yscore > kscore)
            printf("Yonsei\n");

        else if (yscore < kscore)
            printf("Korea\n");

        else
            printf("Draw\n");

        t--;
    }

    return 0;
}