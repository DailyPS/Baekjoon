#include <bits/stdc++.h>

using namespace std;

int n, m;
int num[9];
bool check[9] = {0};

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", num[i]);
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            check[i] = true;
            num[cnt] = i;
            dfs(cnt + 1);
            check[i] = false;
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    dfs(0);

    return 0;
}
