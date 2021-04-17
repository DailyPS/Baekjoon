#include <bits/stdc++.h>

using namespace std;

int arr[1005] = { 0 };

int main(void)
{
    int sum = 0;
    int pop = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;

        scanf("%d", &num);

        sum += num;
        arr[num]++;
    }

    for (int i = 10; i < 1000; i += 10)
    {
        if (arr[pop] < arr[i])
            pop = i;
    }

    printf("%d\n%d", sum / 10, pop);

    return 0;
}