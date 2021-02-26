#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int p, q;

    scanf("%d %d", &p, &q);

    if (p <= 50 && q <= 10)
        printf("White");

    else if (q >= 30)
        printf("Red");

    else 
        printf("Yellow");

    return 0;
}