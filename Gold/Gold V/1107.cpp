#include <bits/stdc++.h>

using namespace std;

int n, m;
int error[11];

bool channel_possible(int n)
{
    if (n == 0 && error[0])
        return false;

    while (n > 0)
    {
        if (error[n % 10])
            return false;

        n /= 10;
    }

    return true;
}

int count_digit(int n)
{
    int digits = 0;

    if (n == 0)
        digits++;

    else
    {
        while(n != 0)
        {
            n /= 10;
            digits++;
        }
    }

    return digits;
}

int main(void)
{
    scanf("%d %d", &n, &m);

    if (m > 0)
    {
        int tmp;

        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &tmp);
            error[tmp] = 1;
        }     
    }

    int ans = abs(100 - n);

    for (int i = 0; i <= 1000000; i++)
    {
        if (channel_possible(i))
            ans = min(ans, abs(n - i) + count_digit(i));
    }

    printf("%d", ans);

    return 0;
}