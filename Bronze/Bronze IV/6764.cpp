#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b && b < c && c < d)
        printf("Fish Rising");

    else if (a > b && b > c && c > d)
        printf("Fish Diving");

    else if (a == b && b == c && c == d)
        printf("Fish At Constant Depth");

    else
        printf("No Fish");

    return 0;
}
