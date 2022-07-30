#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;
int chess_y[20];

bool check_queen(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (chess_y[i] == chess_y[num] || num - i == abs(chess_y[i] - chess_y[num]))
            return false;
    }

    return true;
}

void backtracking(int num)
{
    if (num > n)
        ans++;

    else
    {
        for(int chess_x = 1; chess_x <= n; chess_x++)
        {
            chess_y[num] = chess_x;

            if (check_queen(num))
                backtracking(num + 1);
        }
    }
}

int main(void)
{
    scanf("%d", &n);

    backtracking(1);

    printf("%d", ans);

    return 0;
}