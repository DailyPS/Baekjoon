#include <bits/stdc++.h>

using namespace std;

int num_count[10005] = { 0 };

int main(void)
{
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num = 0;

        scanf("%d", &num);

        num_count[num]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < num_count[i]; j++)
            printf("%d\n", i);
    }
    
    return 0;
}