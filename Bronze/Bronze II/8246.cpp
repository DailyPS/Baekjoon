#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, k, ans;

    scanf("%d %d %d", &a, &b, &k);

    int temp = a / k;
    int temp2 = b / k;

    ans = temp * temp2 - max(0, temp - 2) * max(0, temp2 - 2);

    printf("%d", ans);

    return 0;
}
