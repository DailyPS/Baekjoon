#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, max = -1000000, min = 1000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (max < num)
            max = num;
        if (min > num)
            min = num;
    }
    cout << min << " " << max << endl;
    
    return 0;
}