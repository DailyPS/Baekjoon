#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a[5];

    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    for (int i = 2; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }    
    }

    printf("%d", a[1]);

    return 0;
}