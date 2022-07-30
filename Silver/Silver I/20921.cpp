#include <bits/stdc++.h>

using namespace std;

int n, k;
int arr[4500] = { 0 };

int main(void)
{
    scanf("%d %d", &n, &k);

    int target = n;

    while(k)
    {
        if (target - 1 >= k)
        {
            arr[n - k] = target;
            k = 0;
        }

        else
        {
            arr[n - target + 1] = target;
            k -= (target - 1);
        }

        target--;
    }

    int ele = 1;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = ele;
            ele++;
        }
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}