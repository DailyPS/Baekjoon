#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    double a, b, c;
    double ans1, ans2;

    scanf("%lf %lf %lf", &a, &b, &c);

    ans1 = (a * b) / c;
    ans2 = (a / b) * c;

    if (ans1 >= ans2)
        printf("%d", (long long int)ans1);

    else 
        printf("%d", (long long int)ans2);

    return 0;
}