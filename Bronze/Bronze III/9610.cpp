#include <bits/stdc++.h>

using namespace std;

int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;

void check_quad(int x, int y)
{
    if (x == 0 || y == 0)
        axis++;

    else
    {
        if (x > 0 && y > 0)
            q1++;
        
        else if (x < 0 && y > 0)
            q2++;

        else if (x < 0 && y < 0)
            q3++;

        else
            q4++;
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        check_quad(x, y);
    }

    printf("Q1: %d\n", q1);
    printf("Q2: %d\n", q2);
    printf("Q3: %d\n", q3);
    printf("Q4: %d\n", q4);
    printf("AXIS: %d", axis);

    return 0;
}