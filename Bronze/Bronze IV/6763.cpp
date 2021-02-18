#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sub = b - a;

    if (sub <= 0)
        printf("Congratulations, you are within the speed limit!");

    else if (sub >= 1 && sub <= 20)
        printf("You are speeding and your fine is $100.");

    else if (sub >= 21 && sub <= 30)
        printf("You are speeding and your fine is $270.");

    else
        printf("You are speeding and your fine is $500.");

    return 0;
}
