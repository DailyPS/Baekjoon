#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int w;
    int n;
    long long sum = 0;

    cin >> w >> n;

    for (int i = 0; i < n; i++)
    {
        int wi, li;

        cin >> wi >> li;

        sum += wi * li;
    }

    cout << sum / w;

    return 0;
}