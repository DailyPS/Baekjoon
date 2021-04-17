#include <bits/stdc++.h>

using namespace std;

int arr[15];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
            scanf("%d", &arr[j]);

        sort(arr, arr + 10, greater<>());

        printf("%d\n", arr[2]);
    }

    return 0;
}