#include <iostream>

using namespace std;

int n, cnt;
queue<long long> num;

int main(void)
{
    scanf("%d", &n);

    for (int i = 1; i < 10; i++)
        num.push(i);

    while(!num.empty())
    {
        long long x = num.front();
        cnt++;
        num.pop();

        if (cnt == n)
        {
            printf("%lld", x);
            return 0;
        }

        for (int i = 0; i < x % 10; i++)
            num.push(x * 10  + i);
    }

    printf("%d", -1);
}
