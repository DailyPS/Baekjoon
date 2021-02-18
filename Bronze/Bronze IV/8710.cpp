#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k, w, m;

    scanf("%d %d %d", &k, &w, &m);

    int ans = (w - k) / m;

    if ((w - k) % m != 0)
        ans++;

    printf("%d", ans);

    return 0;
}
