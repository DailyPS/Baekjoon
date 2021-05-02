#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n;
    long long int count = 1;
    long long int room_num = 1;
    int ans = 1;

    scanf("%lld", &n);

    while(true)
    {
        if (n <= room_num)
            break;

        ans++;
        room_num += 6 * count;
        count++;
    }

    printf("%d", ans);

    return 0;
}