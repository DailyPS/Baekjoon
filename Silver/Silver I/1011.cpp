#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int x, y;

        scanf("%lld %lld", &x, &y);
        
        long long int sqrt_diff = (long long int) sqrt(y - x);

        if (y - x == sqrt_diff * sqrt_diff)
            printf("%lld\n", 2 * sqrt_diff - 1);
        
        else if (y - x > sqrt_diff * sqrt_diff && y - x <= sqrt_diff * sqrt_diff + sqrt_diff)
            printf("%lld\n", 2 * sqrt_diff);

        else if (y - x > sqrt_diff * sqrt_diff + sqrt_diff && y - x <= (sqrt_diff + 1) * (sqrt_diff + 1))
            printf("%lld\n", 2 * sqrt_diff + 1);
    }
    
    return 0;
}