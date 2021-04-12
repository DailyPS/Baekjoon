#include <bits/stdc++.h>

using namespace std;

bool is_hansu(int num)
{
    int diff = ((num / 10) % 10) - (num % 10);
    int first = num % 10;

    num /= 10;

    while (num)
    {
        int second = num % 10;

        if (second != first + diff)
            return false;

        num /= 10;
        first = second;
    }

    return true;
}   

int main(void)
{
    int n;
    int ans = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i >= 1 && i <= 99)
            ans++;

        else
        {
            if (is_hansu(i))
                ans++;
        } 
    }

    printf("%d", ans);

    return 0;
}