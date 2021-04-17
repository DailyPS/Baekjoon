#include <bits/stdc++.h>

using namespace std;

int arr[10];

int main(void)
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    sort(arr, arr + 5);

    printf("%d\n%d", sum / 5, arr[2]);

    return 0;
}