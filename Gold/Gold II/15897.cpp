#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    long long ans = 0;

    cin >> n;

    for (int i = n; i > 0; i = (n - 1) / ((n - 1) / i + 1))
        ans += ceil((double) n / i) * (i - (n - 1) / ((n - 1) / i + 1));

    cout << ans;

    return 0;
}