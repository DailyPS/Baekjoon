#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int tmp = i;

        while(tmp % 5 == 0)
        {
            ans++;
            tmp /= 5;
        }
    }

    printf("%d", ans);

    return 0;
}