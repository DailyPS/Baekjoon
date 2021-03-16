#include <bits/stdc++.h>

using namespace std;

int n;
int paper[2200][2200];
int cnt[3] = {0};

bool check_paper(int x, int y, int len)
{
    for (int i = x; i < x + len; i++)
    {
        for (int j = y; j < y + len; j++)
        {
            if (paper[x][y] != paper[i][j])
                return false;
        }
    }

    return true;
}

void divide_paper(int x, int y, int len)
{
    if (check_paper(x, y, len))
    {
        cnt[paper[x][y] + 1] += 1;
        return;
    }

    int new_len = len / 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            divide_paper(x + i * new_len, y + j * new_len, new_len);
        }
    }
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &paper[i][j]);
        }
    }

    divide_paper(0, 0, n);

    for (int i = 0; i <= 2; i++)
        printf("%d\n", cnt[i]);

    return 0;
}