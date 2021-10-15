#include <bits/stdc++.h>

using namespace std;

int score[1005];

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int max_score = INT_MIN;
    double sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];

        if (score[i] > max_score)
            max_score = score[i];
    }

    for (int i = 0; i < n; i++)
        sum += ((double)score[i] / max_score) * 100;

    cout << sum / n;

    return 0;
}