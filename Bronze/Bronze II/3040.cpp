#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int height[9];

    for (int i = 0; i < 9; i++)
        scanf("%d", &height[i]);

    sort(height, height + 9);

    int sum = 0;
    int idx1, idx2;

    for (int i = 0; i < 9; i++)
        sum += height[i];

    for (int i = 0; i < 8; i++)
    {
        int tmp;

        for (int j = 1; j < 9; j++)
        {
            tmp = sum - height[i] - height[j];

            if (tmp == 100)
            {
                idx1 = i;
                idx2 = j;
                break;
            }
        }

        if (tmp == 100)
            break;
    }

    for (int i = 0; i < 9; i++)
    {
        if (i == idx1 || i == idx2)
            continue;

        printf("%d\n", height[i]);
    }

    return 0;
}