#include <bits/stdc++.h>

using namespace std;

int fac(int num)
{
    if (num == 1)
        return num;

    else
        return num * fac(num - 1);
}

int main(void)
{
    int n;
    int ans;

    scanf("%d", &n);

    if (n != 0)
        ans = fac(n);

    if (!n)
        printf("1");

    else
        printf("%d", ans);

    return 0;
}