#include <bits/stdc++.h>

using namespace std;

int n;
int ans = 0;
vector<string> v;
map<char, int> char_sum;
vector<pair<int, char>> rank_sum;
map<char, int> char_num;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;

    v.resize(n);

    for (auto &i : v)
        cin >> i;

    for (auto str : v)
    {
        int len = str.length();

        for (int i = 0; i < len; i++)
            char_sum[str[i]] += pow(10, len - (i + 1));
    }

    for (auto i : char_sum)
        rank_sum.push_back(make_pair(i.second, i.first));

    sort(rank_sum.rbegin(), rank_sum.rend());

    int num = 9;

    for (auto i : rank_sum)
        char_num[i.second] = num--;

    for (auto i : char_sum)
        ans += char_num[i.first] * i.second;

    printf("%d", ans);

    return 0;
}
