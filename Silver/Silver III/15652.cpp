#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[9];

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m - 1; i++)
        {
            if (num[i] > num[i + 1])
                return;
        }

        for (int i = 0; i < m; i++)
        {
            printf("%d ", num[i]);
        }

        printf("\n");

        return;
    }

    for (int i = 1; i <= n; i++)
    {
        num[cnt] = i;
        dfs(cnt + 1);
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    dfs(0);

    return 0;
}

