#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int m, n;
    double sum = 0;

    scanf("%d %d", &m, &n);

    double min_sqr = (int)pow(ceil(sqrt(m)), 2);

    for (int i = (int)ceil(sqrt(m)); i <= (int)floor(sqrt(n)); i++)
        sum += pow(i, 2);

    if (!sum)
        printf("-1");

    else
        printf("%.0lf\n%.0lf", sum, min_sqr);

    return 0;
}