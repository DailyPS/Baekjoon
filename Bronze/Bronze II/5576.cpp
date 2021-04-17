#include <bits/stdc++.h>

using namespace std;

int W[15];
int K[15];

int main(void)
{
    for (int i = 0; i < 10; i++)
        scanf("%d", &W[i]);

    for (int i = 0; i < 10; i++)
        scanf("%d", &K[i]);

    sort(W, W + 10, greater<>());
    sort(K, K + 10, greater<>());

    printf("%d %d", W[0] + W[1] + W[2], K[0] + K[1] + K[2]);

    return 0;
}