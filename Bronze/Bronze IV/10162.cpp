#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int a = 0, b = 0, c = 0;

    scanf("%d", &t);

    if(!(t % 10))
    {
        a = t / 300;
        t = t % 300;
        b = t / 60;
        t = t % 60;
        c = t / 10;

        printf("%d %d %d", a, b, c);
    }

    else
        printf("-1");

    return 0;
}
