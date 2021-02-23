#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("%d", &h1);
    
    for (int i = 0; i < 3; i++)
        getchar();

    scanf("%d", &m1);

    for (int i = 0; i < 3; i++)
        getchar();

    scanf("%d", &s1);

    scanf("%d", &h2);
    
    for (int i = 0; i < 3; i++)
        getchar();

    scanf("%d", &m2);

    for (int i = 0; i < 3; i++)
        getchar();

    scanf("%d", &s2);

    int ah = 0, am = 0, as = 0;

    as = s2 - s1;

    if (as < 0)
    {
        as += 60;
        am -= 1;
    }      

    am += m2 - m1;

    if (am < 0)
    {
        am += 60;
        ah -= 1;       
    }

    ah += h2 - h1;

    if (ah < 0)
        ah += 24;

    int ans = ah * 3600 + am * 60 + as;

    printf("%d", ans);

    return 0;
}