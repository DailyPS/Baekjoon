#include <bits/stdc++.h>

using namespace std;

char date[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main(void)
{
    int m, y;
    int cm = 1, cy = 1;
    int now = 0;

    scanf("%d %d", &m, &y);

    while(true)
    {
        if (cm == m && cy == y)
            break;

        cy++;
        now++;

        if ((cm == 1 || cm == 3 || cm == 5 || cm == 7 || cm == 8 || cm == 10 || cm == 12) && cy > 31)
        {
            cm++;
            cy = 1;
        }

        else if ((cm == 4 || cm == 6 || cm == 9 || cm == 11) && cy > 30)
        {
            cm++;
            cy = 1;
        }

        else if (cm == 2 && cy > 28)
        {
            cm++;
            cy = 1;
        }

        now %= 7;
    }

    printf("%s", date[now]);

    return 0;
}