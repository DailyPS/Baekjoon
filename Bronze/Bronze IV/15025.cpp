#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l, r;
    
    scanf("%d %d", &l, &r);

    if (l > r)
        printf("Odd %d", 2 * l);

    else if (l < r)
        printf("Odd %d", 2 * r);

    else if (l == r && (l || r))
        printf("Even %d", 2 * l);

    else
        printf("Not a moose");

    return 0;
}