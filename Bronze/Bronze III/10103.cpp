#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int cscore = 100, sscore = 100;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        if (a > b)
            sscore -= a;

        else if (a < b)
            cscore -= b;
    }

    printf("%d\n%d", cscore, sscore);

    return 0;
}