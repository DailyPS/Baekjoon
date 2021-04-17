#include <bits/stdc++.h>

using namespace std;

int number[100005] = { 0 };

int main(void)
{
    int k;
    int idx = 0;
    long long int sum = 0;

    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        int num;

        scanf("%d", &num);

        if  (!num)
        {
            number[idx - 1] = 0;
            idx--;
        }

        else
        {
            number[idx] = num;
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
        sum += number[i];

    printf("%lld", sum);

    return 0;
}