#include <bits/stdc++.h>

using namespace std;

string sen;
vector<int> num;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> sen;

    int cur = 0, tmp = 0;

    for(auto c : sen)
    {
        if (c == '+')
        {
            tmp += cur;
            cur = 0;
        }

        else if (c == '-')
        {
            num.push_back(cur + tmp);
            cur = 0;
            tmp = 0;
        }

        else
            cur = cur * 10 + (c - '0');
    }

    num.push_back(cur + tmp);

    printf("%d", num[0] - accumulate(num.begin() + 1, num.end(), 0));

    return 0;
}
