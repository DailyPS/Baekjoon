#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int r, e, c;

        scanf("%d %d %d", &r, &e, &c);

        if (e - c > r)
            printf("advertise\n");

        else if (e - c < r)
            printf("do not advertise\n");

        else
            printf("does not matter\n");
        
        t--;
    }

    return 0;
}