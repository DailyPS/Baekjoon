#include <bits/stdc++.h>

using namespace std;

int is_prime(int n)
{
    int cnt = 0;

    if (n == 1)
        return 0;

    else
    {
        for (int i = 1; i <= (int) floor(sqrt(n)); i++)
        {
            if (n % i == 0)
                cnt++;
        }

        if (cnt == 1)
            return 1;

        else
            return 0;
    }
}


int main(void)
{
    int m, n;
    int cnt = 0, sum = 0, min_prime;

    scanf("%d %d", &m, &n);

    for (int i = n; i >= m; i--)
    {
        if(is_prime(i))
        {
            cnt++;
            sum += i;
            min_prime= i;
        }
    }

    if (cnt)
        printf("%d\n%d", sum, min_prime);

    else
        printf("-1");

    return 0;
}