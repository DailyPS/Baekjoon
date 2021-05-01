#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> dot;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        dot.push_back(make_pair(x, y));
    }

    sort(dot.begin(), dot.end(), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", dot[i].first, dot[i].second);

    return 0;
}