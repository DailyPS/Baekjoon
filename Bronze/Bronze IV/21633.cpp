#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k;
    double ans;

    scanf("%d", &k);

    ans = 25 + k * 0.01;

    if (ans < 100.00)
        printf("100.00");

    else if (ans > 2000.00)
        printf("2000.00");
    
    else
        printf("%.2lf", ans);

    return 0;
}