#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        string two_b;
        int ans;

        scanf("%d %d", &a, &b);

        for (int i = 0; i < b; i++)
        {
            if (i == 0)
            {
                ans = a % 10;
                //printf("Now : %d\n", ans);
            }
                
            else
            {
                ans = (ans * a)  % 10;
                //printf("Now Mul : %d\n", ans);
            }    
        }

        if (ans == 0)
            printf("%d\n", 10);

        else
            printf("%d\n", ans);
    }

    return 0;
}