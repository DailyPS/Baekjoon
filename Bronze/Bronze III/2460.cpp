#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int in, out;
    int cur = 0, ans = -1;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d", &out, &in);

        cur -= out;
        cur += in;

        ans = max(ans, cur);
    }

    printf("%d", ans);

    return 0;
}