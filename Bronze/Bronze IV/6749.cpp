#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int ans = b + (b - a);
    
    printf("%d", ans);
    
    return 0;
}