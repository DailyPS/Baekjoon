#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int wc = 0;

    for (int i = 0; i < 6; i++)
    {
        char c;

        scanf("%c", &c);
        getchar();

        if (c == 'W')
            wc++;
    }

    if (wc == 5 || wc == 6)
        printf("%d", 1);

    else if (wc == 3 || wc == 4)
        printf("%d", 2);

    else if (wc == 1 || wc == 2)
        printf("%d", 3);

    else
        printf("%d", -1);

    return 0;
}
