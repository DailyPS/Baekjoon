#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        int max_prime = 1;
        bool is_prime[10001] = { 0 };

        scanf("%d", &num);

        for (int i = 2; i * i <= num; i++)
        {
            if (!is_prime[i])
            {
                for (int j = i * i; j <= num; j += i)
                    is_prime[j] = true;
            }
        }

        for (int i = 2; i <= num / 2; i++)
        {
            if (!is_prime[i] && !is_prime[num - i])
                max_prime = i;
        }
        
        printf("%d %d\n", max_prime, num - max_prime);
    }

    return 0;
}