#include <bits/stdc++.h>

using namespace std;

int arr[1000005];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    return 0;
}