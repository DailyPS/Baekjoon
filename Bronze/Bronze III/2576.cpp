#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int sum = 0;
    int min = INT_MAX;

    for (int i = 0; i < 7; i++)
    {
        int n;

        scanf("%d", &n);

        if (n % 2)
        {
            sum += n;

            if (min > n)
                min = n;
        }
    }

    if (sum)
        printf("%d\n%d", sum, min);

    else
        printf("-1");

    return 0;
}