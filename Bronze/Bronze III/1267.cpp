#include <bits/stdc++.h>

using namespace std;

int n;
int ycost = 0, mcost = 0;
int arr[25];

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        ycost += 10 * ((arr[i] / 30) + 1);
        mcost += 15 * ((arr[i] / 60) + 1);
    }

    if (ycost > mcost)
        printf("M %d", mcost);

    else if (mcost > ycost)
        printf("Y %d", ycost);

    else
        printf("Y M %d", ycost);

    return 0;
}