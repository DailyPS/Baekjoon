#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char grade;
    char add;

    scanf("%1c%1c", &grade, &add);

    if (grade == 'A')
    {
        if (add == '+')
            printf("%.1lf", 4.3);

        else if (add == '-')
            printf("%.1lf", 3.7);

        else
            printf("%.1lf", 4.0);
    }

    else if (grade == 'B')
    {
        if (add == '+')
            printf("%.1lf", 3.3);

        else if (add == '-')
            printf("%.1lf", 2.7);

        else
            printf("%.1lf", 3.0);

    }

    else if (grade == 'C')
    {
        if (add == '+')
            printf("%.1lf", 2.3);

        else if (add == '-')
            printf("%.1lf", 1.7);

        else
            printf("%.1lf", 2.0);
    }

    else if (grade == 'D')
    {
        if (add == '+')
            printf("%.1lf", 1.3);

        else if (add == '-')
            printf("%.1lf", 0.7);

        else
            printf("%.1lf", 1.0);
    }

    else
        printf("%.1lf", 0.0);

    return 0;
}