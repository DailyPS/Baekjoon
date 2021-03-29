#include <bits/stdc++.h>

using namespace std;

int n;
int check_cnt = 1;
int arr[100][100];

bool check_compress(int x, int y, int n)
{
    int standard = arr[x][y];

    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (standard != arr[i][j])
                return false;
        }
    }

    return true;
}

void divide_and_conquer(int x, int y, int n)
{
    if (check_compress(x, y, n))
        printf("%d", arr[x][y]);

    else
    {
        printf("%c", '(');

        int new_n = n / 2;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                divide_and_conquer(x + new_n * i, y + new_n * j, new_n);
        }

        printf("%c", ')');
    } 
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%1d", &arr[i][j]);
    }

    divide_and_conquer(0, 0, n);

    return 0;
}