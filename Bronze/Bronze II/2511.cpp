#include <bits/stdc++.h>

using namespace std;

int a[10];
int b[10];
int score_a = 0, score_b = 0;
bool last_a = false, last_b = false;

int main(void)
{
    for (int i = 0; i < 10 ; i++)
        scanf("%d", &a[i]);
    
    for (int i = 0; i < 10 ; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < 10 ; i++)
    {
        if (a[i] > b[i])
        {
            score_a += 3;
            last_a = true;
            last_b = false;
        }
            

        else if (a[i] < b[i])
        {
            score_b += 3;
            last_a = false;
            last_b = true;
        }

        else
        {
            score_a++;
            score_b++;
        }
    }

    if (score_a > score_b)
    {
        printf("%d %d\n", score_a, score_b);
        printf("A");
    }

    else if (score_a < score_b)
    {
        printf("%d %d\n", score_a, score_b);
        printf("B");
    }

    else
    {
        if (last_a && !last_b)
        {
            printf("%d %d\n", score_a, score_b);
            printf("A");
        }

        else if (!last_a && last_b)
        {
            printf("%d %d\n", score_a, score_b);
            printf("B");
        }

        else
        {
            printf("%d %d\n", score_a, score_b);
            printf("D");
        }
    }

    return 0;
}