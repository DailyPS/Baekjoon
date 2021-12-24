#include <bits/stdc++.h>

using namespace std;

int n, m, b;
int height[300] = { 0 };
int ans_time = INT_MAX;
int ans_height;

int main(void)
{
    scanf("%d %d %d", &n, &m, &b);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int tmp;
            scanf("%d", &tmp);
            height[tmp]++;
        }
    }

    for (int i = 256; i >= 0; i--)
    {
        int time = 0;
        int need = 0;

        for (int j = 0; j < i; j++)
        {
            time += height[j] * (i - j);
            need += height[j] * (i - j);
        }

        for (int j = i + 1; j <= 256; j++)
        {
            time += height[j] * (j - i) * 2;
            need -= height[j] * (j - i);
        }

        if (b - need < 0)
            continue;

        if (ans_time > time)
        {
            ans_time = time;
            ans_height = i;
        }
    }

    printf("%d %d", ans_time, ans_height);

    return 0;
}
