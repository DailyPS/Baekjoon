#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int k, d, a;

    scanf("%d", &k);
    getchar();
    scanf("%d", &d);
    getchar();
    scanf("%d", &a);

    if (k + a < d || d == 0)
        printf("hasu");

    else
        printf("gosu");

    return 0;
}