#include <bits/stdc++.h>

using namespace std;

int attendance[31] = {0};

int main(void)
{
    for (int i = 0; i < 28; i++)
    {
        int num;
        
        scanf("%d", &num);

        attendance[num] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (!attendance[i])
            printf("%d\n", i);
    }

    return 0;
}