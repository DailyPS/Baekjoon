#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, v;
    int day = 0;

    scanf("%d %d %d", &a, &b, &v);

    day = ((v - b) % (a - b) == 0) ? (v - b) / (a - b) : (v - b) / (a - b) + 1;

    printf("%d", day);

    return 0;
}