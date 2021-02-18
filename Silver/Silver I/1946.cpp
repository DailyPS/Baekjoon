#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> people;
int t, n;

int main(void)
{
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        people.resize(n);

        for (int i = 0; i < n; i++)
            scanf("%d %d", &people[i].first, &people[i].second);

        sort(people.begin(), people.end());

        int min_second = people[0].second;
        int ans = 1;

        for (int i = 1; i < n; i++)
        {
            if (min_second > people[i].second)
            {
                min_second = people[i].second;
                ans++;
            }
        }

         printf("%d\n", ans);
    }

    return 0;
}
