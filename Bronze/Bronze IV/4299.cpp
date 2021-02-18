#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int add, sub;

    scanf("%d %d", &add, &sub);

    int a, b;
    int flag = 0;

    a = (add + sub) / 2;
    b = (add - sub) / 2;
    flag = (add - sub) % 2;

    if (flag || a < 0 || b < 0)
        printf("%d", -1);

    else
        printf("%d %d", a, b);

    return 0;
}
