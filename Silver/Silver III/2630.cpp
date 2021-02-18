#include <bits/stdc++.h>

using namespace std;

const int FAIL = -1;

int n;
int ans[2] = { 0 };
int paper[130][130];
int search_x[] = {0, 1, 0, 1};
int search_y[] = {0, 0, 1, 1};

int p_color(int length, int x, int y)
{
    if (length == 1)
        return paper[y][x];

    int root = paper[y][x];
    int color_count[2] = {0, 0};

    for (int i = 0; i < 4; i++)
    {
        int new_x = x + search_x[i] * length / 2;
        int new_y = y + search_y[i] * length / 2;
        int color = p_color(length / 2, new_x, new_y);

        if (color != FAIL)
            color_count[color]++;

        if (root != color)
            root = FAIL;
    }

    if(root == FAIL)
    {
        ans[0] += color_count[0];
        ans[1] += color_count[1];
    }

    return root;
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &paper[i][j]);
    }

    int color = p_color(n, 0, 0);

    if(color != FAIL)
        ans[color]++;

    printf("%d\n%d", ans[0], ans[1]);

    return 0;
}
