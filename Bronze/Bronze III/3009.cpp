#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x[2] = {0};
    int y[2] = {0};
    int numx[2] = {0};
    int numy[2] = {0};

    int a, b;

    scanf("%d %d", &a, &b);

    numx[0] = a;
    numy[0] = b;
    x[0]++;
    y[0]++;

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &a, &b);

        if (numx[0] == a)
            x[0]++;

        else
        {
            numx[1] = a;
            x[1]++;
        }

        if (numy[0] == b)
            y[0]++;

        else
        {
            numy[1] = b;
            y[1]++;
        }
    }
    
    if (x[0] == 1)
        printf("%d ", numx[0]);
    
    else
        printf("%d ", numx[1]);

    if (y[0] == 1)
        printf("%d", numy[0]);
    
    else
        printf("%d", numy[1]);

    return 0;
}