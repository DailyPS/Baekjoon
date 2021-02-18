#include<bits/stdc++.h>

using namespace std;

vector<int> rope;

int main(void)
{
    int n;
    int ans = 0;

    scanf("%d", &n);

    rope.resize(n);

    for (auto &i : rope)
        scanf("%d", &i);

    sort(rope.rbegin(), rope.rend());

    for (int i = 0; i < n; i++)
    {
        if (ans < rope[i] * (i + 1))
            ans = rope[i] * (i + 1);
    }

    printf("%d", ans);

    return 0;
}
