#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, k, ans;

    scanf("%d %d", &n, &k);

    if (n - (60 + k) <= 0)
        ans = n * 1500;

    else
        ans = (60 + k) * 1500 + (n - (60 + k)) * 3000;

    printf("%d", ans);

    return 0;
}