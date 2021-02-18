#include <bits/stdc++.h>

using namespace std;

int n, ans = -1;
int people[50] = { 0 };

void max_peo(int num, int peo)
{
    if (num > n - 1)
    {
        ans = max(ans, peo);
        return;
    }

    max_peo(num + 1, peo);
    max_peo(num + 2, peo + people[num]);
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num1, num2;

        scanf("%d", &num1);
        scanf("%d", &num2);
        scanf("%d", &people[i]);
    }

    max_peo(0 , 0);

    printf("%d", ans);
}
