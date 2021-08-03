#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> b;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;
        
        a.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;
        
        b.push_back(tmp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());

    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];

    cout << sum;

    return 0;
}