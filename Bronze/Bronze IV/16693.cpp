#include <bits/stdc++.h>

using namespace std;

const double pi = 3.1415926535;

int main(void)
{
    int a1, p1, a2, p2;

    scanf("%d %d %d %d", &a1, &p1, &a2, &p2);

    double ans1 = (double) a1 / p1;
    double ans2 = (double) (a2 * a2 * pi) / p2;

    if (ans1 > ans2)
        printf("Slice of pizza");

    else
        printf("Whole pizza");

    return 0;
}