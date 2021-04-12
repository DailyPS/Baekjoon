#include <bits/stdc++.h>

using namespace std;

int fibonacci(int num)
{
    if (num <= 1)
        return num;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void)
{
    int n, ans;

    scanf("%d", &n);

    ans = fibonacci(n);

    printf("%d", ans);

    return 0;
}