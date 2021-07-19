#include<bits/stdc++.h>

using namespace std;

int n, r, c;
int num = 0;
int dc[] = {0, 1, 0, 1};
int dr[] = {0, 0, 1, 1};

void f(int len, int fr, int fc)
{
    if (len == 1)
    {
        if (fr == r && fc == c)
        {
            printf("%d", num);
            exit(0);
        }

        else
        {
            num++;
            return;
        }
    }

    if (fr + len < r | fc + len < c)
        num += len * len;

    else
    {
        for (int i = 0; i < 4; i++)
        {
            int nc = fc + dc[i] * len / 2;
            int nr = fr + dr[i] * len / 2;

            f(len / 2, nr, nc);
        }
    }
}

int main(void)
{
    scanf("%d %d %d", &n ,&r, &c);

    f(pow(2, n), 0, 0);

    return 0;
}
