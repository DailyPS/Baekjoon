#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    int ans = n * (n + 1) * (n + 2) / 2;

    printf("%d", ans);

    return 0;
}