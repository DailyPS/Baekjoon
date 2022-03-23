#include <bits/stdc++.h>

using namespace std;

int pos_count[4005] = { 0 };
int neg_count[4005] = { 0 };

int num_max = INT_MIN;
int num_min = INT_MAX;
int most_count = 0;

int avg;
double sum = 0;

vector<int> v;
vector<int> most;

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;

        scanf("%d", &num);

        v.push_back(num);
        sum += num;

        if (num >= 0)
            pos_count[num]++;

        else
            neg_count[0 - num]++;

        num_max = max(num_max, num);
        num_min = min(num_min, num);
    }

    avg = round(sum / n);

    for (int i = 0; i <= 4000; i++)
    {
        if (pos_count[i] > most_count)
            most_count = pos_count[i];

        if (neg_count[i] > most_count)
            most_count = neg_count[i];
    }

    for (int i = -4000; i <= 4000; i++)
    {
        if (i >= 0 && pos_count[i] == most_count)
            most.push_back(i);

        if (i < 0 && neg_count[0 - i] == most_count)
            most.push_back(i);
    }

    sort(v.begin(), v.end());

    printf("%d\n%d\n%d\n%d", avg, v[n / 2], (most.size() == 1 ? most[0] : most[1]), num_max - num_min);

    return 0;
}