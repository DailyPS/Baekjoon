#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n != 1)
    {
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                printf("%d\n", i);
                n /= i;
            }

            if (n == 1)
                break;
        }
    }

    return 0;
}