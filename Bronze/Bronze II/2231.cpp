#include <bits/stdc++.h>

using namespace std;

int n;
int ans;
bool flag = false;

int get_res_sum(int num)
{
    int sum = num;

    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void)
{
    scanf("%d", &n);

    int res_sum;

    for (int i = 1; i < n; i++)
    {
        res_sum = get_res_sum(i);

        if (res_sum == n)
        {
            flag = true;
            ans = i;
            break;
        }
    }

    if (flag)
        printf("%d", ans);

    else
        printf("%d", 0);

    return 0;
}