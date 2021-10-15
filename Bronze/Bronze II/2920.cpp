#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, up = 0, down = 0;
    scanf("%d", &n);
    
    if (n == 1)
    {
        for(int i = 0; i < 7; i++)
        {
            int a;
            scanf("%d", &a);
            
            if (a == n + 1)
            {
                n = a;
                up++;
            } 
            
            else
            {
                printf("mixed");
                break;
            }
        }
    }
    
    else if (n == 8)
    {
        for(int i = 0; i < 7; i++)
        {
            int a;
            scanf("%d", &a);
            
            if (a == n - 1)
            {
                n = a;
                down++;
            }
            
            else
            {
                printf("mixed");
                break;
            }
        }
    }
    
    else
    {
        printf("mixed");
    }
    
    if (up == 7)
    {
        printf("ascending");
    }
    
    else if (down == 7)
    {
        printf("descending");
    }
    
    return 0;
}