#include <bits/stdc++.h>

using namespace std;

int d(int num)
{
    int sum = num;

    while(num)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void)
{
    int ans[10005] = {0};

    for (int i = 1; i <= 10000; i++)
    {
        int idx = d(i);

        if (idx <= 10000)
            ans[idx] = 1;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!ans[i])
            printf("%d\n", i);
    }

    return 0;
}