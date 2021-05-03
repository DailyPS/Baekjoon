#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;
vector<pair<int, int>> rank_pair;

int ans[55] = { 0 };

int main(void)
{  
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        v.push_back(make_pair(x, y));
    }

    for (int i = 0; i < n; i++)
    {
        int big_count = 0;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (v[i].first < v[j].first && v[i].second < v[j].second)
                    big_count++;
            }
        }

        rank_pair.push_back(make_pair(big_count, i));
    }

    stable_sort(rank_pair.begin(), rank_pair.end());

    int rank_num = 1;
    int same_count = 0;

    for (int i = 0; i < n; i++)
    {
        ans[rank_pair[i].second] = rank_pair[i].first + 1;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}