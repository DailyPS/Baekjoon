#include <bits/stdc++.h>

using namespace std;

int find_prime(int n)
{
    int count = 0;
    bool is_prime[250000] = { 0 };

    for (int i = 2; i * i <= 2 * n; i++)
    {
        if (!is_prime[i])
        {  
            for (int j = i * i; j <= 2 * n; j += i)
                is_prime[j] = true;
        }
    }

    for (int i = n + 1; i <= 2 * n; i++)
    {
        if (!is_prime[i])
            count++;      
    }

    return count;
}

int main(void)
{
    while(1)
    {
        int n;

        scanf("%d", &n);

        if (!n)
            break;

        int ans = find_prime(n);

        printf("%d\n", ans);
    }

    return 0;
}