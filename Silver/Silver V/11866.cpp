#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
        q.push(i);

    printf("<");

    while(!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        printf("%d", q.front());
        q.pop();

        if (!q.empty())
            printf(", ");
    }

    printf(">");

    return 0;
}