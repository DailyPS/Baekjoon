#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;
    long long sa = 0, sb = 0;
    long long sum = 0, cnt = 0;

    scanf("%d %d", &a, &b);

    for (int i = 1 ; i <= 45; i++)
    {
        for (int j = 1 ; j <= i; j++)
        {
            sum += i;
            cnt += 1;

            if (cnt == a - 1)
                sa = sum;

            if (cnt == b)
                sb = sum;
        }
    }

    printf("%lld", sb - sa);

    return 0;
}