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
            if (a > b)
                printf("Yes\n");

            else
                printf("No\n");
        }
    }

    return 0;
}