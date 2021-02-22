#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a1, a2, a3;
    int ans;

    scanf("%d %d %d", &a1, &a2, &a3);

    int time1 = 2 * a2 + 4 * a3;
    int time2 = (a1 + a3) * 2;
    int time3 = 2 * a2 + 4 * a1;

    int min = time1;

    if (min > time2)
        min = time2;

    if (min > time3)
        min = time3;

    printf("%d", min);

    return 0;
}