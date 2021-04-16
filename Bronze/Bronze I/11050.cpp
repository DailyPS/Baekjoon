#include <bits/stdc++.h>

using namespace std;

int fact(int num)
{
    if (num <= 1)
        return 1;

    else
        return num * fact(num - 1);
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    if (k == 0 || n == k)
        printf("1");

    else
        printf("%d", fact(n) / (fact(k) * fact(n - k)));

    return 0;
}