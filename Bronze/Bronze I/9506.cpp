#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    while(1)
    {
        int n;
        int arr[10005] = {0};

        scanf("%d", &n);

        if (n == -1)
            break;

        int idx = 0;
        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                arr[idx] = i;
                idx++;
            }
        }

        if (sum == n)
        {
            printf("%d = ", n);

            for (int i = 0; i < idx; i++)
            {
                printf("%d", arr[i]);

                if (i != idx - 1)
                    printf(" + ");

                else
                    printf("\n");
            }
        }

        else
            printf("%d is NOT perfect.\n", n);
    }

    return 0;
}