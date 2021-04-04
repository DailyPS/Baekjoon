#include <bits/stdc++.h>

using namespace std;

int width[10] = {4, 2, 3, 3, 3, 3, 3, 3, 3, 3};

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n > 0)
    {
        int ans = 1;

        while(n > 0)
        {
            ans += width[n % 10];
            n /= 10;
            ans += 1;
        }

        printf("%d\n", ans);
        scanf("%d", &n);
    }

    return 0;
}