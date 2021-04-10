#include <bits/stdc++.h>

using namespace std;

int reverse_number(int num)
{
    int rev_n = 0;

    while(num)
    {
        rev_n *= 10;
        rev_n += num % 10;
        num /= 10;
    }

    return rev_n;
}

bool check_palindrome(int num)
{
    string num_str;
    int digit = 0;

    while(num)
    {
        num_str += (num % 10) + '0';
        num /= 10;
        digit++;
    }

    for (int i = 0; i < digit / 2; i++)
    {
        if (num_str[i] != num_str[digit - i - 1])
            return false;
    }

    return true;
}

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n, rev_n;

        scanf("%d", &n);
        
        rev_n = reverse_number(n);

        if (check_palindrome(n + rev_n))
            printf("YES\n");

        else
            printf("NO\n");

        t--;
    }
}