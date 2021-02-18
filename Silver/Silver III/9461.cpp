#include<bits/stdc++.h>

using namespace std;

int n;
long long dp[105] = {0, 1, 1, 1, 2,};

int main(void)
{

    for(int i = 5; i <= 100; i++)
        dp[i] = dp[i - 1] + dp[i - 5];

    int t;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        printf("%lld\n", dp[n]);
    }

    return 0;
}
