#include <bits/stdc++.h>

using namespace std;

int count_zero(int num)
{
    int cnt = 0;

    if (num == 0)
        cnt++;

    while(num)
    {
        cnt += (num % 10 == 0 ? 1 : 0);
        num /= 10;
    }

    return cnt;
}

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n, m;
        int ans = 0;

        scanf("%d %d", &n, &m);

        for (int i = n; i <= m; i++)
            ans += count_zero(i);
        
        printf("%d\n", ans);

        t--;
    }

    return 0;
}