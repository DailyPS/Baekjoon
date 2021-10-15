#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num, cycle = 0;

    cin >> num;

    int n = num;

    while(1)
    {
        int tmp = (n / 10) + (n % 10);

        int new_n = (n % 10) * 10 + (tmp % 10);

        cycle++;

        if (new_n == num)
            break;

        else
            n = new_n;
    }

    cout << cycle << "\n";

    return 0;
}