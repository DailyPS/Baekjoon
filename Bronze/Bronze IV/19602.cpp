#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int happy = 1 * a + 2 * b  + 3 * c;

    if (happy >= 10)
        printf("happy");

    else
        printf("sad");

    return 0;
}