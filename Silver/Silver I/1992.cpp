#include <bits/stdc++.h>

using namespace std;

int n, r, c;
int ans = 0;
bool found = false;

void divide_and_conquer(int x, int y, int n)
{
    if (n == 1)
    {
        if (x == r && y == c)
        {
            printf("%d", ans);
            exit(0);
        }

        else
            ans++;
    }

    else
    {
        if (x + n < r || y + n < c)
            ans += n * n;

        else
        {
            int new_n = n / 2;

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    divide_and_conquer(x + new_n * i, y + new_n * j, new_n);
            }
        }                                    
    }    
    
}

int main(void)
{
    scanf("%d %d %d", &n, &r, &c);

    divide_and_conquer(0, 0, pow(2, n));

    printf("%d", ans);

    return 0;
}