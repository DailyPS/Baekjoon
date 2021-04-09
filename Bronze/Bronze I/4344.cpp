#include <bits/stdc++.h>

using namespace std;

int score[1005];

double get_avg(int* score, int num)
{
    int sum = 0;

    for (int i = 0; i < num; i++)
        sum += score[i];

    return (double) sum / num;
}

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
            scanf("%d", &score[i]);

        double avg = get_avg(score, n);
        int over_avg = 0;

        for (int i = 0; i < n; i++)
        {
            if ((double) score[i] > avg)
                over_avg++;
        }

        printf("%.3lf", ((double) over_avg / n) * 100);
        printf("%%\n");

        t--;
    }

    return 0;
}