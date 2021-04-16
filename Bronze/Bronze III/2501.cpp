#include <bits/stdc++.h>

using namespace std;

int divisor[10005] = {0};

int main(void)
{
    int n, k;
    int idx = 1;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor[idx] = i;
            idx++;
        }
    }

    printf("%d", divisor[k]);

    return 0;
}