#include <bits/stdc++.h>

using namespace std;

queue<int> q;
int n;

int main(void)
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        q.push(i);

    while(n > 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
        n--;
    }

    printf("%d", q.front());

    return 0;
}
