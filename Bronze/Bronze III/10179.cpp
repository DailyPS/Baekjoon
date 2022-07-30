#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        double money;

        scanf("%lf", &money);

        printf("$");
        printf("%.2lf\n", 0.8 * money);
    }

    return 0;
}
