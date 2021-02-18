#include <bits/stdc++.h>

using namespace std;

int num[7] = { 0 };

int main(void)
{
    int n;
    int max_count = 0;
    int ans_index;
    int ans;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        num[n]++;
    }

    for (int i = 1; i <= 6; i++)
    {
        if (max_count <= num[i])
        {
            max_count = num[i];
            ans_index = i;
        }
    }

    if (max_count == 1)
    {
        ans = ans_index * 100;
        printf("%d", ans);
    }

    else if (max_count == 2)
    {
        ans = 1000 + ans_index * 100;
        printf("%d", ans);
    }

    else if (max_count == 3)
    {
        ans = 10000 + ans_index * 1000;
        printf("%d", ans);
    }

    return 0;
}
