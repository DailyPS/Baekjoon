#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    int aq, ar, bq, br;

    aq = a / 4 + (a % 4 == 0 ? -1 : 0);
    ar = (a % 4 == 0 ? 4 : a % 4);
    bq = b / 4 + (b % 4 == 0 ? -1 : 0);
    br = (b % 4 == 0 ? 4 : b % 4);

    printf("%d", abs(aq - bq) + abs(ar - br));

    return 0;
}