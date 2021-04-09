#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, ans = -1;

    scanf("%d", &n);

    for (int i = n / 5; i >= 0; i--)
    {
        int remain = n - 5 * i;

        if (remain == 0)
        {
            ans = i;
            break;
        }

        if (remain % 3 == 0)
        {
            ans = i + remain / 3;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}