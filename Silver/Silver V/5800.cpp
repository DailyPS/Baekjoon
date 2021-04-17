#include <bits/stdc++.h>

using namespace std;

int score[55] = { 0 };

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int m;
        int max_gap = INT_MIN;

        scanf("%d", &m);

        for (int j = 0; j < m; j++)
            scanf("%d", &score[j]);

        sort(score, score + m, greater<>());

        for (int j = 0; j < m - 1; j++)
            max_gap = max(max_gap, score[j] - score[j + 1]);

        printf("Class %d\n", i);
        printf("Max %d, Min %d, Largest gap %d\n", score[0], score[m - 1], max_gap);
    }

    return 0;
}