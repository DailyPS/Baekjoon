#include <bits/stdc++.h>

using namespace std;

int num[100005] = { 0 };

int main(void)
{
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    sort(num, num + n);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int target;

        scanf("%d", &target);

        int start = 0;
        int end = n;
        bool found = false;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (num[mid] < target)
                start = mid + 1;

            else if (num[mid] > target)
                end = mid - 1;

            else
            {
                found = true;
                break;
            }
        }

        if (found)
            printf("1\n");

        else
            printf("0\n");
    }

    return 0;
}