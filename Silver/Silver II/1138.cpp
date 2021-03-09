#include <bits/stdc++.h>

using namespace std;

int n;
int num_arr[15];
int ans_arr[15] = { 0 };

int main(void)
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &num_arr[i]);

    for(int i = 1; i <= n; i++)
    {
        int tmp = num_arr[i];

        for (int j = 1; tmp >= 0; j++)
        {
            if (ans_arr[j] == 0)
            {
                if (tmp > 0)
                    tmp--;
                
                else if (tmp == 0)
                {
                    ans_arr[j] = i;
                    tmp--;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", ans_arr[i]);

    return 0;
}