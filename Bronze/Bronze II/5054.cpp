#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t)
    {
        int n;
        int min_pos = INT_MAX, max_pos = INT_MIN;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            int pos;

            scanf("%d", &pos);

            min_pos = min(min_pos, pos);
            max_pos = max(max_pos, pos);
        }

        printf("%d\n", (max_pos - min_pos) * 2);

        t--;
    }

    return 0;
}