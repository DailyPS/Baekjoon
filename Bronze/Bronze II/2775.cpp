#include <bits/stdc++.h>

using namespace std;

int count_people(int k, int n)
{
    if (n == 1)
        return 1;

    if (k == 0)
        return n;

    return count_people(k - 1, n) + count_people(k, n - 1);
}

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int k, n;
        int ans = 0;

        scanf("%d %d", &k, &n);

        ans = count_people(k, n);

        printf("%d\n", ans);

        t--;
    }

    return 0;
}