#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n;
        int total_time = 0;
        double total_grade = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            int a;
            double b;

            scanf("%d %lf", &a, &b);

            total_time += a;
            total_grade += b * a;
        }

        printf("%d %.1lf\n", total_time, (double) total_grade / total_time);

        t--;
    }

    return 0;
}