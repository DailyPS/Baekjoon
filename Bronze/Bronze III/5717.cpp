#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    while(1)
    {
        int male, female;

        scanf("%d %d", &male, &female);

        if (male == 0 && female == 0)
            break;

        else
        {
            printf("%d\n", male + female);
        }
    }

    return 0;
}