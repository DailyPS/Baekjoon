#include <bits/stdc++.h>

using namespace std;

vector<int> pos[100005];
vector<int> graph[100005];

int ans = 1;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        for (int j = 0; j < num; j++)
        {
            int people;
            cin >> people;

            pos[people].push_back(i); 
        }
    }

    for (int i = 0; i < 100005; i++)
    {
        for (int j = 0; j + 1 < pos[i].size(); j++)
            graph[pos[i][j]].push_back(pos[i][j + 1]);
    }

    
    vector<int> dp(n, 1);
    
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j : graph[i])
        {
            dp[i] = max(dp[i], dp[j] + 1);
            ans = max(ans, dp[i]);
        }
    }

    cout << ans;

    return 0;
}