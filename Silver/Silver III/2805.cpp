#include<bits/stdc++.h>

using namespace std;

int n, m;
int tree[1000005];

bool height_check(int cut)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += max(tree[i] - cut, 0);

    return sum >= m;
}

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &tree[i]);

    int low = 0, high = 1e9 +5;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if (height_check(mid))
            low = mid + 1;

        else
            high = mid - 1;
    }

    printf("%d", high);
}
