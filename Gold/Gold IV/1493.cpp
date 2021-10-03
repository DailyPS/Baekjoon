#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int l, w, h, n;
int ans = 0;
bool check = true;
vector<pair<ll, ll>> cube;

void fill_box(int l,int w, int h, int n)
{
    //printf("Now Fill : %d %d %d %d\n", l, w, h, n);
    if (n == -1)
    {
        if ((ll) l * w * h > 0)
            check = false;

        return;
    }

    ll len = cube[n].first;
    ll num = cube[n].second;

    if (len > l || len > w || len > h || num == 0)
    {
        fill_box(l, w, h, n - 1);
        return;
    }

    ans++;
    cube[n].second--;

    fill_box(l - len, w, h, n);
    fill_box(len, w - len, h, n);
    fill_box(len, len, h - len, n);
}

int main(void) {
    scanf("%d %d %d %d", &l, &w, &h, &n);

    cube.resize(n);

    for (int i = 0; i < n; i++)
    {
        int u, v;

        scanf("%d %d", &u, &v);

        cube[i].first = pow(2, u);
        cube[i].second = v;
    }

    fill_box(l, w, h, n - 1);

    if (check)
    {
        printf("%d", ans);
    }

    else
    {
        printf("%d", -1);
    }

	return 0;
}
