#include <bits/stdc++.h>

using namespace std;

long long int rope[10005] = { 0 };
int k, n;

bool check_num(long long int len)
{
    int count = 0;

    for (int i = 0; i < k; i++)
        count += rope[i] / len;

    return count >= n;
}

int main(void)
{
    scanf("%d %d", &k, &n);

    long long int end = 0;

    for (int i = 0; i < k; i++)
    {
        scanf("%lld", &rope[i]);
        end = max(end, rope[i]);
    }    

    long long int ans = 0;
    long long int start = 1;

    while(start <= end)
    {
        long long int mid = (start + end) / 2;

        if (check_num(mid))
        {
            ans = max(ans, mid);
            start = mid + 1;
        }
        
        else
            end = mid - 1;
    }

    printf("%lld", ans);

    return 0;
}