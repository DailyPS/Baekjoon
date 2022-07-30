#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10001];

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    int l = 1, r = 1;
    int sum = arr[l];
    int ans = 0;

    while (r <= n)
    {
        if (sum == m)
            ans++;

        if (sum > m)
            sum -= arr[l++];
        else
            sum += arr[++r];
    }

    printf("%d", ans);

    return 0;
}
