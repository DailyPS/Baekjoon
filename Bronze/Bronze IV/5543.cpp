#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int minh = 2000, minv = 2000;
    
    for (int i = 0; i < 3; i++)
    {
        int num;
        cin >> num;
        if (minh > num)
            minh = num;
    }
    
    for (int i = 0; i < 2; i++)
    {
        int num;
        cin >> num;
        if (minv > num)
            minv = num;
    }
    
    cout << minh + minv - 50;
    
    return 0;
}