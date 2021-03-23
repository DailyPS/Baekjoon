#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n % 2)
        printf("Either");

    else
    {
        if ((n / 2) % 2)
            printf("Odd");

        else
            printf("Even");
    }
    
    return 0;
}