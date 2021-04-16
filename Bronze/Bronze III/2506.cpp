#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int ans = 0, score = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int check;

        scanf("%d", &check);

        if (check)
        {
            ans += score;
            score++;
        }

        else
            score = 1;
    }

    printf("%d", ans);

    return 0;
}