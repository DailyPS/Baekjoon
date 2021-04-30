#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int b;

    scanf("%d", &b);

    if (b * 5 - 400 < 100)
    {
        printf("%d\n", b * 5 - 400);
        printf("1");
    }
        

    else if (b * 5 - 400 > 100)
    {
        printf("%d\n", b * 5 - 400);
        printf("-1");
    }
        
    else
    {
        printf("%d\n", b * 5 - 400);
        printf("0");
    }

    return 0;
}