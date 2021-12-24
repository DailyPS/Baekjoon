#include <bits/stdc++.h>

using namespace std;

int n, k, ans;
long long pos[50005];

bool blast(long long power)
{
    int count = 0;

    for (int i = 0; i < n;)
    {
        int j = i;

        while (j < n && pos[j] - pos[i] <= 2 * power)
            j++;

        count++;
        i = j;
    }

    return count <= k;
}

int main(void)
{
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &pos[i]);

    sort(pos, pos + n);

    long long left = 0;
    long long right = 1e9;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        
        if (blast(mid))
            right = mid - 1;
        
        else
            left = mid + 1;
    }

    printf("%lld", left);

    return 0;
}