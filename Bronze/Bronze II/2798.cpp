#include <bits/stdc++.h>

using namespace std;

int card[105] = { 0 };

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> card[i];

    int bound_max = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = card[i] + card[j] + card[k];

                if (bound_max < sum && sum <= m)
                    bound_max = sum;
            }
        }
    }

    cout << bound_max;

    return 0;
}