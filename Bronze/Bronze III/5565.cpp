#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int total;

    scanf("%d", &total);

    for (int i = 0; i < 9; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        total -= tmp;
    }

    printf("%d", total);

    return 0;
}