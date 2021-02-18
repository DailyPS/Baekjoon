#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;
    int e, f, g, h;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);

    int mdx, mdy, ans;

    mdx = max(c, g) - min(a, e);
    mdy = max(d, h) - min(b, f);
    ans = max(mdx, mdy);

    printf("%lld", ans * ans);

    return 0;
}
