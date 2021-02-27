#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    
    for(int i = 1; i <= n; i++)
    {
        int t;
        scanf("%d", &t);
        
        if (t < x)
            printf("%d ", t);
    }
        
    return 0;
}