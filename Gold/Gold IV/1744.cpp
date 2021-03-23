#include <bits/stdc++.h>

using namespace std;

int n;
long long ans = 0;
long long arr[10005], neg_arr[10005], pos_arr[10005];

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    sort(arr, arr + n);

    int neg_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            neg_arr[neg_idx] = arr[i];
            neg_idx++;
        }
        
        else
            break;
    }

    int pos_idx = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 0 && arr[i] != 1)
        {
            pos_arr[pos_idx] = arr[i];
            pos_idx++;
        }

        else if (arr[i] == 1)
            ans += arr[i];
        
        else
            break;
    }

    for (int i = 0; i < neg_idx; i += 2)
    {
        if (i + 1 >= neg_idx)
            ans += neg_arr[i];

        else
            ans += neg_arr[i] * neg_arr[i + 1];
    }

    for (int i = 0; i < pos_idx; i += 2)
    {
        if (i + 1 >= pos_idx)
            ans += pos_arr[i];

        else
            ans += pos_arr[i] * pos_arr[i + 1];
    }

    printf("%lld", ans);

    return 0;
}