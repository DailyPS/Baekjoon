#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, ans;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        int h, w, t;
        scanf("%d %d %d", &h, &w, &t);
        
        if (t % h == 0)
            ans = (h * 100) + (t / h);
        
        else
            ans = ((t % h) * 100) + ((t / h) + 1);
            
        printf("%d\n", ans);
    }
    
    return 0;
}