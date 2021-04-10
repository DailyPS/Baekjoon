#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    int pro = 0, con = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int opinion;

        scanf("%d", &opinion);

        if (opinion)
            pro++;

        else
            con++;
    }

    if (con > pro)
        printf("Junhee is not cute!");

    else   
        printf("Junhee is cute!");

    return 0;
}