#include <bits/stdc++.h>

using namespace std;

int n, m, l, k;
int ans = -1;
vector<pair<int, int>> star;
vector<int> star_x, star_y;

bool in_trampoline(int x, int y, pair<int, int> star)
{
    return x <= star.first && x + l >= star.first && y <= star.second && y + l >= star.second;
}

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(NULL);

    cin >> n >> m >> l >> k;
    star.resize(k);

    for (int i = 0; i < k; i++)
    {
        cin >> star[i].first >> star[i].second;
        star_x.push_back(star[i].first);
        star_y.push_back(star[i].second);
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int cnt = 0;
            
            for (int o = 0; o < k; o++)
            {
                if (in_trampoline(star_x[i], star_y[j], star[o]))
                    cnt++;
            }

            ans = max(ans, cnt);
        }
    }

    cout << k - ans;

    return 0;
}