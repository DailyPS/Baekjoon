#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int h, m;
    cin >> h >> m;
    
    if(m - 45 >= 0)
    {
        m -= 45;
    }
    
    else
    {
        if (h == 0) {
            h = 23;
            m += 15;
        }
        
        else {
            h -= 1;
            m += 15;
        }
    }
    
    cout << h << " " << m;
    
    return 0;
}