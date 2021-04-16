#include <bits/stdc++.h>

using namespace std;

char alphapet[12] = { 'I', 'J', 'K', 'L', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
char num[10] = { '6', '7', '8', '9', '0', '1', '2', '3', '4', '5' };

int main(void)
{
    int year;

    scanf("%d", &year);

    printf("%c", alphapet[(year % 60) % 12]);
    printf("%c", num[(year % 60) % 10]);

    return 0;
}