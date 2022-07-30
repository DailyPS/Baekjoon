#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans = 0;
    int n;
    int adder = 1;

    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        ans += adder;

        if (i % 2)
            adder++;
    }

    printf("%d", ans);

    return 0;
}
