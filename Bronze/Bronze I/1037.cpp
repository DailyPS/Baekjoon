#include <bits/stdc++.h>

using namespace std;

int arr[55] = { 0 };

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr + n);

    if (n % 2)
    {
        printf("%d", arr[n / 2] * arr[n / 2]);
    } 

    else
        printf("%d", arr[0] * arr[n - 1]);

    return 0;
}