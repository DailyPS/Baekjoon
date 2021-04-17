#include <bits/stdc++.h>

using namespace std;

int reverse(int num)
{
    int reverse_num = 0;

    while(num)
    {
        reverse_num = reverse_num * 10 + num % 10;
        num /= 10;
    }

    return reverse_num;
}

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", reverse(reverse(x) + reverse(y)));

    return 0;
}