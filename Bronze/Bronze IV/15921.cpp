#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
    scanf("%d", &n);

    double avg = 0;
    double exp = 0;

    for (int i = 0; i < n; i++)
    {
        double temp;

        scanf("%lf", &temp);

        avg += temp;
        exp += temp * 1 / n;
    }

    if (n == 0 || exp == 0)
    {
        printf("divide by zero");
        return 0;
    }

    avg /= n;

    printf("%.2lf", avg / exp);

    return 0;
}