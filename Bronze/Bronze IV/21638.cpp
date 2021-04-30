#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t1, v1;
    int t2, v2;
    bool message_sent = false;

    scanf("%d %d %d %d", &t1, &v1, &t2, &v2);

    if (t2 < 0 && v2 >= 10)
    {
        message_sent = true;
        printf("A storm warning for tomorrow! Be careful and stay home if possible!\n");
    }

    else if (t1 > t2)
    {
        message_sent = true;
        printf("MCHS warns! Low temperature is expected tomorrow.\n");
    }

    else if (v1 < v2)
    {
        message_sent = true;
        printf("MCHS warns! Strong wind is expected tomorrow.\n");
    }

    else
        printf("No message");

    return 0;
}