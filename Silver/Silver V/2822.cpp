#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> score;
vector<pair<int, int>> used;

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        int tmp;

        scanf("%d", &tmp);

        score.push_back(make_pair(tmp, i + 1));
    }

    sort(score.begin(), score.end(), greater<>());

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += score[i].first;
        used.push_back(make_pair(score[i].second, score[i].first));
    }

    sort(used.begin(), used.end());

    printf("%d\n", sum);

    for (int i = 0; i < 5; i++)
        printf("%d ", used[i].first);

    return 0;
}