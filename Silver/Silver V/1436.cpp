#include <bits/stdc++.h>

using namespace std;

void print_666(int n)
{
    int count = 1;
    int front_digit = 0;
    int back_digit = 0;

    while(true)
    {
        if ((front_digit % 10000) / 10 == 6666 && front_digit % 10 != 6)
        {
            for (int i = 0; i < 1000; i++)
            {
                if (count == n)
                {
                    printf("%d", front_digit * 1000 + back_digit);
                    return;
                }

                back_digit++;
                count++;
            }

            front_digit++;
        }

        else if (front_digit % 1000 == 666)
        {
            back_digit = 0;

            for (int i = 0; i < 1000; i++)
            {
                if (count == n)
                {
                    printf("%d", front_digit * 1000 + back_digit);
                    return;
                }

                back_digit++;
                count++;
            }

            front_digit++;
        }

        else if (front_digit % 100 == 66)
        {
            back_digit = 600;

            for (int i = 0; i < 100; i++)
            {
                if (count == n)
                {
                    printf("%d", front_digit * 1000 + back_digit);
                    return;
                }

                back_digit++;
                count++;
            }

            front_digit++;
        }

        else if (front_digit % 10 == 6)
        {
            back_digit = 660;

            for (int i = 0; i < 10; i++)
            {
                if (count == n)
                {
                    printf("%d", front_digit * 1000 + back_digit);
                    return;
                }

                back_digit++;
                count++;
            }

            front_digit++;
        }

        else
        {
            back_digit = 666;

            if (count == n)
            {
                printf("%d", front_digit * 1000 + back_digit);
                return;
            }

            count++;
            front_digit++;
        }
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_666(n);

    return 0;
}