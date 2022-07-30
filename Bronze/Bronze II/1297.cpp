#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    double k = a / sqrt(b *b + c *c);

    int ans_b = (b * k) / 1;
    int ans_c = (c * k) / 1;

    printf("%d %d", ans_b, ans_c);

    return 0;
}
