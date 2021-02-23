#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int c1, b1, p1;
    int c2, b2, p2;

    scanf("%d %d %d", &c1, &b1, &p1);
    scanf("%d %d %d", &c2, &b2, &p2);

    int ans = 0;

    if (c1 - c2 < 0)
        ans += c2 - c1;
    
    if (b1 - b2 < 0)
        ans += b2 - b1;

    if (p1 - p2 < 0)
        ans += p2 - p1;

    printf("%d", ans);

    return 0;
}
