#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        int zcount = 0, ocount = 0;

        for (int j = 0; j < 4; j++)
        {
            int yut;

            scanf("%d", &yut);

            if (yut)
                ocount++;

            else
                zcount++;
        }

        if (zcount == 1 && ocount == 3)
            printf("A");

        else if (zcount == 2 && ocount == 2)
            printf("B");

        else if (zcount == 3 && ocount == 1)
            printf("C");

        else if (zcount == 4 && ocount == 0)
            printf("D");

        else
            printf("E");

        printf("\n");
    }

    return 0;
}