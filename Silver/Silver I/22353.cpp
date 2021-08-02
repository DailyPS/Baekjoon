#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, d, k;
    int cnt = 1;
    double expect = 0, success, fail, increase;

    cin >> n >> d >> k;

    success = (double) d / 100;
    fail = 1.0;
    increase = (double) k / 100;

    while(true)
    {
        expect += cnt * n * success * fail;
        cnt++;
        
        if (success * (1.0 + increase) >= 1)
            break;

        else
            fail *= (1.0 - success);
            success = success * (1.0 + increase);
    }

    expect += cnt * n * (1.0 - success) * fail;

    cout << fixed;
    cout.precision(10);

    cout << expect;

    return 0;
}