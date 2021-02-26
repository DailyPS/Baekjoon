#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int s, k, h;

    scanf("%d %d %d", &s, &k, &h);

    int min = s;
    int n = 1;

    if (min > k)
    {
        min = k;
        n = 2;
    }
        
    if (min > h)
    {
        min = h;
        n = 3;
    }
    
    if (s + k + h >= 100)
        printf("OK");

    else
    {
        if (n == 1)
            printf("Soongsil");

        else if (n == 2)
            printf("Korea");

        else
            printf("Hanyang");
    }

    return 0;
}