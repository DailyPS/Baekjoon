#include <bits/stdc++.h>

using namespace std;

long long m, n, ans = 0;
long long arr[1005];

int main(void)
{
    scanf("%lld %lld", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    for (int i = 0; i < m; i++)
    {
        long long min = LLONG_MAX, sec_min = LLONG_MAX;
        long long min_index = -1, sec_min_index = -1;

        for (int j = 0; j < n; j++)
        {
            if (min >= arr[j])
            {
                sec_min = min;
                min = arr[j];
                sec_min_index = min_index;
                min_index = j;
            }

            else if (min < arr[j] && arr[j] <= sec_min)
            {
                sec_min = arr[j];
                sec_min_index = j;
            }
        }

        long long change = arr[min_index] + arr[sec_min_index];
        //printf("FV : %lld, SV : %lld\n", arr[min_index], arr[sec_min_index]);
        //printf("CV : %lld\n", change);
        arr[min_index] = change;
        arr[sec_min_index] = change;
    }

    for (int i = 0; i < n; i++)
        ans += arr[i];

    printf("%lld", ans);

    return 0;
}