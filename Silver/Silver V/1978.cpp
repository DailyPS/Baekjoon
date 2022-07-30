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
    int n;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int tmp;

        scanf("%d", &tmp);

        ans += is_prime(tmp);
    }

    printf("%d", ans);

    return 0;
}