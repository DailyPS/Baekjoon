#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;
    int cnt1 = 0, cnt2 = 0;

    scanf("%d", &a);

    if (a == 1)
        cnt1++;

    else
        cnt2++;

    scanf("%d", &b);

    if (b == 1)
        cnt1++;

    else
        cnt2++;

    scanf("%d", &c);

    if (c == 1)
        cnt1++;

    else
        cnt2++;

    if (cnt1 > cnt2)
        printf("1");

    else
        printf("2");

    return 0;
}