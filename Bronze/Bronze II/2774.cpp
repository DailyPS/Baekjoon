#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;

    cin >> t;

    while(t)
    {
        int n;
        int cnt = 0;
        bool digit_check[10] = { 0 }; 

        cin >> n;

        while(n > 0)
        {
            int res = n % 10;

            if (!digit_check[res])
                cnt++;

            n /= 10;
            digit_check[res] = true;
        }

        cout << cnt << "\n";

        t--;
    }
    return 0;
}