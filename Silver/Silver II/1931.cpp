#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v;
int n;

int main(void)
{
    int ans = 0;
    int cur = 0;

    scanf("%d", &n);

    v.resize(n);

    for (auto &i : v)
        scanf("%d %d", &i.second, &i.first);

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= cur)
        {
            cur = v[i].first;
            ans++;
        }
    }

    printf("%d", ans);

    return 0;
}
