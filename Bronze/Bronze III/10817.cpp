#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num[3];

    for (int i = 0; i < 3; i++)
        scanf("%d", &num[i]);

    sort(num, num + 3);

    printf("%d", num[1]);

    return 0;
}