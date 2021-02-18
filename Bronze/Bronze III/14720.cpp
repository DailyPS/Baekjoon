#include <bits/stdc++.h>

using namespace std;

int n;
int milk[1005];

int main(void)
{
    int tar_milk = 0, now_milk;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &now_milk);

        if (now_milk == tar_milk)
        {
            if (now_milk == 0)
                tar_milk = 1;

            else if (now_milk == 1)
                tar_milk = 2;

            else if (now_milk == 2)
                tar_milk = 0;

            ans++;
        }
    }

    printf("%d", ans);
}
