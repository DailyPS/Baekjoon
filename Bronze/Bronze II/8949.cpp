#include <bits/stdc++.h>

using namespace std;

long long int dood_sum(int a, int b)
{
    long long int sum = 0;
    long long int c_digit = 1;
    int tmp1, tmp2;

    while(a > 0 || b > 0)
    {
        tmp1 = a % 10;
        tmp2 = b % 10;

        if (tmp1 + tmp2 >= 10)
        {
            sum += (tmp1 + tmp2) * c_digit;
            c_digit *= 100;
        }

        else
        {
            sum += (tmp1 + tmp2) * c_digit;
            c_digit *= 10;
        }

        a /= 10;
        b /= 10;
    }

    return sum;
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;

    cin >> a >> b;

    cout << dood_sum(a, b);

    return 0;
}