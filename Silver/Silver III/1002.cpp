#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int x1, y1, r1;
        int x2, y2, r2;

        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int add_r = (r1 + r2) * (r1 + r2);
        int sub_r = (r1 - r2) * (r1 - r2);

        if (d == 0)
        {
            if (sub_r == 0)
                printf("-1\n");

            else
                printf("0\n");
        }

        else if (d == add_r || d == sub_r)
            printf("1\n");

        else if (d > sub_r && d < add_r)
            printf("2\n");

        else
            printf("0\n");

        t--;
    }

    return 0;
}