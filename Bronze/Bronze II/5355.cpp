#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while(t)
    {
        double n;
        string calc;

        cin >> n;
        getline(cin, calc);

        for (int i = 0; i < calc.size(); i++)
        {
            if (calc[i] == '@')
                n *= 3;
            
            else if (calc[i] == '%')
                n += 5;

            else if (calc[i] == '#')
                n -= 7;
        }

        printf("%.2lf\n", n);

        t--;
    }

    return 0;
}