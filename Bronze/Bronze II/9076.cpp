#include <bits/stdc++.h>

using namespace std;

int score[10];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            scanf("%d", &score[j]);

        sort(score, score + 5);

        if (score[3] - score[1] >= 4)
            printf("KIN\n");

        else
            printf("%d\n", score[1] + score[2] + score[3]);
    }

    return 0;
}