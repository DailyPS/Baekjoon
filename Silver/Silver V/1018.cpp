#include <bits/stdc++.h>

using namespace std;

int ans = INT_MAX;
string board[50];

int count_paint_white(int x, int y, int check)
{
    int cnt = 0;

    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            if ((i + j) % 2 != check)
            {
                if (board[i][j] != 'B')
                    cnt++;
            }

            else
            {
                if (board[i][j] != 'W')
                    cnt++;
            }

        }
    }

    return cnt;
}

int count_paint_black(int x, int y, int check)
{
    int cnt = 0;

    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            if ((i + j) % 2 != check)
            {
                if (board[i][j] != 'W')
                    cnt++;
            }

            else
            {
                if (board[i][j] != 'B')
                    cnt++;
            }
        }
    }

    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i + 8 <= n; i++)
    {
        for (int j = 0; j + 8 <= m; j++)
        {
            ans = min(ans, count_paint_white(i, j, (i + j) % 2));
            ans = min(ans, count_paint_black(i, j, (i + j) % 2));
        }
    }

    printf("%d", ans);

    return 0;
}