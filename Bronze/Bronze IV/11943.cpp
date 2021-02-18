#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;
    int ans = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    ans = min(a + d, b + c);

    printf("%d", ans);

    return 0;
}
