#include <bits/stdc++.h>

using namespace std;

int n, m;
int inum[9];
int num[9];
bool check_idx[9] = {0};

void dfs(int cnt, int input[])
{
    if (cnt == m)
    {
        for (int i = 0; i < m - 1; i++)
        {
            if (num[i] > num [i + 1])
                return;
        }

        for (int i = 0; i < m; i++)
        {
            printf("%d ", num[i]);
        }

        printf("\n");

        return;
    }

    bool check_num[10005] = { 0 };

    for (int i = 0; i < n; i++)
    {
        if (!check_idx[i] && !check_num[input[i]])
        {
            check_idx[i] = true;
            check_num[input[i]] = true;
            num[cnt] = input[i];
            dfs(cnt + 1, input);
            check_idx[i] = false;
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &inum[i]);

    sort(inum, inum  + n);

    dfs(0, inum);

    return 0;
}
