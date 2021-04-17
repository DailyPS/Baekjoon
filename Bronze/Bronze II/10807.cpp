#include <bits/stdc++.h>

using namespace std;

int positive[105] = {0};
int negative[105] = {0};

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;

        scanf("%d", &num);

        if (num >= 0)
            positive[num]++;

        else
            negative[0 - num]++;
    }

    int target;

    scanf("%d", &target);

    if (target >= 0)
        printf("%d", positive[target]);

    else
        printf("%d", negative[0 - target]);

    return 0;
}