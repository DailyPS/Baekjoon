#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a[3];

    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
        printf("%d ", a[i]);
}
