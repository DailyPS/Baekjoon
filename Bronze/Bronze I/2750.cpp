#include <bits/stdc++.h>

using namespace std;

int num[1005];

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    sort(num, num + n);

    for (int i = 0; i < n; i++)
        printf("%d\n", num[i]);

    return 0;
}