#include <bits/stdc++.h>

using namespace std;

map<string, int> query[7], sum;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int day = 0;
    string s;

    while(cin >> s)
    {
        if (!s.compare("<text>"))
        {
            for (auto &i : query[day])
                sum[i.first] -= i.second;

            query[day].clear();

            while(1)
            {
                cin >> s;
                
                if (!s.compare("</text>"))
                    break;

                if (s.length() >= 4)
                    query[day][s]++;
            }

            for (auto &i : query[day])
                sum[i.first] += i.second;

            day = (day + 1) % 7;
        }

        else if (!s.compare("<top"))
        {
            int n;
            vector<pair<int, string>> v;

            cin >> n >> s;
            cout << "<top " << n << ">\n";

            for (auto &i : sum)
            {
                if (i.second)
                    v.emplace_back(-i.second, i.first);
            }

            sort(v.begin(), v.end());

            while(n < v.size() && v[n].first == v[n - 1].first)
                n++;

            for (int i = 0; i < n && i < v.size(); i++)
                cout << v[i].second << " " << -v[i].first << "\n";

            cout << "</top>\n";
        }
    }

    return 0;
}