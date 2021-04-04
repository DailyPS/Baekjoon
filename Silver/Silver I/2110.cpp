#include <bits/stdc++.h>

using namespace std;

int n, c, ans;
long long pos[200005];

bool install_wifi(long long dist)
{
    int cnt = 1;
    long long left = pos[0];

    for(int i = 1; i < n; i++)
    {
        long long diff = pos[i] - left;

        if (diff >= dist)
        {
            left = pos[i];
            cnt++;
        }

        if (cnt == c)
            break;
    }

    return cnt == c;
}

int main(void)
{
    scanf("%d %d", &n, &c);

    for (int i = 0 ; i < n; i++)
        scanf("%lld", &pos[i]);

    sort(pos, pos + n);

    long long left = 0;
    long long right = 1e9;

    while(left <= right)
    {
        long long dist = (left + right) / 2;

        if (install_wifi(dist))
        {
            ans = dist;
            left = dist + 1;
        }

        else
        {
            right = dist - 1;
        }
    }

    printf("%d", ans);

    return 0;
}