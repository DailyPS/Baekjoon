#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    while(1)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)
            break;

        else
        {
            if (a % b == 0)
                printf("multiple\n");
            
            else if (b % a == 0)
                printf("factor\n");

            else
                printf("neither\n");
        }
    }

    return 0;
}