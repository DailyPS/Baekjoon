#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long p1, q1, p2, q2;

    scanf("%lld %lld %lld %lld", &p1, &q1, &p2, &q2);

    bool check = p1 * p2 % (q1 * q2) == 0 && p1 * p2 / (q1 * q2) % 2 == 0;

    if (!check)
        printf("0");

    else
        printf("1");

    return 0;
}