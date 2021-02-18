#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = abs((a + d) - (b + c));

    printf("%d", ans);

    return 0;
}
