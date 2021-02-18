#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;
    char p, e;

    scanf("%d %c %d %c %d", &a, &p, &b, &e, &c);

    if (a + b == c)
        printf("%s", "YES");

    else
        printf("%s", "NO");

    return 0;
}
