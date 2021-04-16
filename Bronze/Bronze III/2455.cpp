#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int in, out;
    int people = 0;
    int max = -1;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &out, &in);

        people -= out;
        people += in;

        if (people > max)
            max = people;
    }

    printf("%d", max);

    return 0;
}