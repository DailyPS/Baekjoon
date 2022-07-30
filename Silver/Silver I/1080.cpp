#include <bits/stdc++.h>

using namespace std;

int n, m;
int ans = 0;
vector<string> A;
vector<string> B;

void trans(int y, int x)
{
    for (int i = y; i < y + 3; i++)
    {
        for (int j = x; j < x + 3; j++)
        {
            if (A[i][j] == '0')
                A[i][j] = '1';

            else
                A[i][j] = '0';
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;

    A.resize(n);
    B.resize(n);

    for(auto &i : A)
        cin >> i;

    for(auto &i : B)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] != B[i][j])
            {
                if (i < n - 2 && j < m - 2)
                {
                    trans(i, j);
                    ans++;
                }

                else
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
