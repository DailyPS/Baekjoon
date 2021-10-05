#include <bits/stdc++.h>

using namespace std;

int n;
int ans = INT_MAX;
int arr[100005];
int weight[50005];

int main(void)
{
    scanf("%d", &n);
    
    for (int i = 0; i < 2 * n; i++)
        scanf("%d", &arr[i]);
    
    sort(arr, arr + 2 * n);
    
    for (int i = 0; i < n; i++)
        weight[i] = arr[i] + arr[(2 * n) - i - 1];
    
    for (int i = 0; i < n; i++)
        ans = min(ans, weight[i]);
    
    printf("%d", ans);
    
    return 0;
}