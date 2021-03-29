#include <bits/stdc++.h>

using namespace std;

int n, s;
int ans = 0;
int arr[24];

void backtracking(int sum, int idx, int cnt)
{
    if (idx == n)
    {
        if (sum == s && cnt > 0)
            ans++;
    }

    else
    {
        backtracking(sum, idx + 1, cnt);
        backtracking(sum + arr[idx], idx + 1, cnt + 1);
    }
}

int main(void)
{
    scanf("%d %d", &n, &s);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    backtracking(0, 0, 0);

    printf("%d", ans);

    return 0;
}