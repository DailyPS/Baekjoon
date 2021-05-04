#include <bits/stdc++.h>

using namespace std;

int is_prime[1000005] = { 0 };

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);

    fill_n(is_prime, n + 1, 1);

    is_prime[0] = 0;
    is_prime[1] = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (is_prime[i])
        {
            for (int j = i * 2; j <= n; j += i)
                is_prime[j] = 0;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (is_prime[i])
            printf("%d\n", i);
    }

    return 0;
}