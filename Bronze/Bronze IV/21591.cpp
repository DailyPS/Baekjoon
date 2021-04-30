#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int wc, hc, ws, hs;

    scanf("%d %d %d %d", &wc, &hc, &ws, &hs);

    if (wc - 2 >= ws && hc - 2 >= hs)
        printf("1");

    else 
        printf("0");

    return 0;
}