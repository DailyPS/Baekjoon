#include<bits/stdc++.h>

using namespace std;

vector<int> t;
int n;

int main(void)
{
    int ans = 0;

    scanf("%d", &n);

    t.resize(n);

    for (auto &i : t)
        scanf("%d", &i);

    sort(t.begin(), t.end());

    for (int i = 0; i < n; i++)
        ans += t[i] * (n - i);

    printf("%d", ans);

    return 0;
}
