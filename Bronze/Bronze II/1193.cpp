#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int x = 1, y = 1, count = 1;

    scanf("%d", &n);

    for (int i = 1;; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (n == count)
            {
                printf("%d/%d", x, y);
                return 0;
            }

            else if (n != count &&  j != i)
            {
                if (i % 2)
                {
                    x--;
                    y++;
                }

                else
                {
                    y--;
                    x++;
                }
            }

            count++;
        }

        if (i % 2)
            y++;

        else
            x++;
    }

    return 0;
}