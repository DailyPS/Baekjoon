#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int even_min = INT_MAX;

        for (int j = 0; j < 7; j++)
        {
            int num;
            
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                sum += num;
                even_min = min(even_min, num);
            }
        }

        printf("%d %d\n", sum, even_min);
    }
    
    return 0;
}