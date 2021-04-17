#include <bits/stdc++.h>

using namespace std;

int score[10];
int ans = -1;
int idx;

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            int score;

            scanf("%d", &score);

            sum += score;
        }

        score[i] = sum;
    }

    for (int i = 0; i < 5; i++)
    {
        if (ans < score[i])
        {
            ans = score[i];
            idx = i + 1;
        }
    }

    printf("%d %d", idx, ans);

    return 0;
}