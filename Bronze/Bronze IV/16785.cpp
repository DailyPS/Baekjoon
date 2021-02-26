#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, ans;

    scanf("%d %d %d", &a , &b, &c);

    int q = c / (a * 7 + b);
    int r = c % (a * 7 + b);

    if (r / a < 7)
    {
        if (r % a > 0)
            ans = q * 7 + r / a + 1;

        else
            ans = q * 7 + r / a;
    }

    else
        ans = (q + 1) * 7;

    printf("%d", ans);

    return 0;
}